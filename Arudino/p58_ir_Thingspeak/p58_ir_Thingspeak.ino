#include <ESP8266WiFi.h>

String apiKey = "QBMOKETA1ZJZINKA";     //  Enter your Write API key from ThingSpeak
const char *ssid =  "JioFi2_E8EFAC";     // replace with your wifi ssid and wpa2 key
const char *pass =  "fhzz5q8bcj";
const char* server = "api.thingspeak.com";

#define IRSensor D3
#define LEDpin D4

WiFiClient client;

void setup()
{
  pinMode (IRSensor, INPUT);
  pinMode (LEDpin, OUTPUT);
  
  Serial.begin(115200);
  delay(10);
  Serial.println("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  if (statusSensor == 1){
    digitalWrite(LEDpin, LOW);
  }else{
    digitalWrite(LEDpin, HIGH);
    Serial.println("Intruder ALERT!");
  }

  if (isnan(statusSensor))
  {
    Serial.println("Failed to read from IR sensor!");
    return;
  }

  if (client.connect(server, 80))  //   "184.106.153.149" or api.thingspeak.com
  {

    String postStr = apiKey;
    postStr += "&field1=";
    postStr += String(statusSensor);
    postStr += "\r\n\r\n";

    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: " + apiKey + "\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(postStr.length());
    client.print("\n\n");
    client.print(postStr);

    Serial.println("%. Send to Thingspeak.");

  }
  client.stop();

  Serial.println("Waiting...");

  // thingspeak needs minimum 15 sec delay between updates
  delay(1000);
}
