#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
// program to display raendom nimber to cyanone & led control

char ssid[] = "jeraths";
char wifiPassword[] = "aditya2k";

char username[] = "88201710-5a1c-11ea-a38a-d57172a4b4d4";
char password[] = "37a27ad3f52be3e9abb509e055b90c99647da2d5";
char clientID[] = "69ebbbf0-1763-11eb-a2e4-b32ea624e442";

int led=D0;
void setup()
{
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, wifiPassword);
  pinMode(led, OUTPUT);
  delay(200);
}

void loop()
{
  Cayenne.loop();
  publishdat();
  delay(2000);
}

void publishdat()
{
  int val=random(0,100);
  Cayenne.virtualWrite(V0, val);
}
CAYENNE_IN(V1)
{
  Serial.println(getValue.asInt());
  if(getValue.asInt()==1)
  {digitalWrite(led, LOW);
  }
  else
  {digitalWrite(led,HIGH);
  }
}
  
