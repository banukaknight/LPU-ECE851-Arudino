#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
// upload distance to cyanne - ultrasonic sensor with nodemcu

char ssid[] = "jeraths";
char wifiPassword[] = "aditya2k";

char username[] = "88201710-5a1c-11ea-a38a-d57172a4b4d4";
char password[] = "37a27ad3f52be3e9abb509e055b90c99647da2d5";
char clientID[] = "69ebbbf0-1763-11eb-a2e4-b32ea624e442";

#define trigger D3
#define echo D4
float timee = 0;
float distance = 0;

void setup()
{
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, wifiPassword);

  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  delay(200);
}

void loop()
{
  Cayenne.loop();
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
    Cayenne.virtualWrite(V0, "Failed to read from ultrasonic sensor!");
  }else{
    Cayenne.virtualWrite(V0, distance);
  }

 delay(1000);
  
}
