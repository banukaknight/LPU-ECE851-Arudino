#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
// 2xdcmotr directions with cyanne

char ssid[] = "jeraths";
char wifiPassword[] = "aditya2k";

char username[] = "88201710-5a1c-11ea-a38a-d57172a4b4d4";
char password[] = "37a27ad3f52be3e9abb509e055b90c99647da2d5";
char clientID[] = "69ebbbf0-1763-11eb-a2e4-b32ea624e442";

int mpin1=D0;
int mpin2=D1;
void setup()
{
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, wifiPassword);
  pinMode(mpin1, OUTPUT);
  pinMode(mpin2, OUTPUT);
  delay(200);
}

void loop()
{
  Cayenne.loop();
  delay(200);
}

CAYENNE_IN(V1)
{
  if(getValue.asInt()==1)
  {digitalWrite(sw1,HIGH);  }
  else
  {digitalWrite(sw1,LOW);  }
}
CAYENNE_IN(V2)
{
  if(getValue.asInt()==1)
  {digitalWrite(sw2,HIGH);  }
  else
  {digitalWrite(sw2,LOW);  }
}
