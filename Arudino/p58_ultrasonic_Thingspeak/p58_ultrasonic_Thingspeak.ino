#include <ESP8266WiFi.h>

String apiKey = "QBMOKETA1ZJZINKA";     //  Enter your Write API key from ThingSpeak
const char *ssid =  "JioFi2_E8EFAC";     // replace with your wifi ssid and wpa2 key
const char *pass =  "fhzz5q8bcj";
const char* server = "api.thingspeak.com";

#define trigger D3
#define echo D4
float timee = 0;
float distance = 0;

WiFiClient client;

void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
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
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);

  timee = pulseIn(echo, HIGH);
  distance = timee * 340 / 20000;

  if (isnan(distance))
  {
    Serial.println("Failed to read from ultrasonic sensor!");
    return;
  }

  if (client.connect(server, 80))  //   "184.106.153.149" or api.thingspeak.com
  {

    String postStr = apiKey;
    postStr += "&field1=";
    postStr += String(distance);
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

    Serial.println("Distance:");
    Serial.println(distance);
    Serial.println("cm");
    Serial.println("%. Send to Thingspeak.");

  }
  client.stop();

  Serial.println("Waiting...");

  // thingspeak needs minimum 15 sec delay between updates
  delay(1000);
}
