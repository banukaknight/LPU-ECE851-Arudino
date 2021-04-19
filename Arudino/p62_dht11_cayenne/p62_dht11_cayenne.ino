#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
// upload temp & humd to cyanne dashboard dht11

#include <dht.h>
#define dhtpin D1
dht objDHT;

char ssid[] = "jeraths";
char wifiPassword[] = "aditya2k";

char username[] = "88201710-5a1c-11ea-a38a-d57172a4b4d4";
char password[] = "37a27ad3f52be3e9abb509e055b90c99647da2d5";
char clientID[] = "69ebbbf0-1763-11eb-a2e4-b32ea624e442";

float temp;
float humd;

void setup()
{
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, wifiPassword);
  delay(200);
}

void loop()
{
  Cayenne.loop();
  objDHT.read11(dhtpin);
  temp = (float)objDHT.humidity;
  humd = (float)objDHT.temperature;
  Cayenne.virtualWrite(1, temp, "temp", "c");
  Cayenne.virtualWrite(2, humd, "rel_hum", "p");  
  
}
