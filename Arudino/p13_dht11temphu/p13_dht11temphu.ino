#include <dht.h>
#define dhtpin 12
dht objDHT;

void setup() {
Serial.begin(9600);
Serial.println("DHT11 Humidity & temperature Sensor\n\n");
}

void loop() {
    objDHT.read11(dhtpin);
    Serial.print("Current humidity = ");
    Serial.print((float)objDHT.humidity, 3);
    Serial.print("%  \n");
    Serial.print("temperature = ");
    Serial.print((float)objDHT.temperature, 2); 
    Serial.println("c  ");
    delay(3000); //min 2sec
}
