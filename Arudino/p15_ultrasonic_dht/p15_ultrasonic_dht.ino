
#define trigger 12
#define echo 11

#include <dht.h>
#define dhtpin 8
dht objDHT;

float time=0, distance=0;

void setup() {
 Serial.begin(9600);
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 Serial.println("Distance Meter with ultrasonic sensor");
 Serial.println("DHT11 Humidity & temperature Sensor\n\n");
}

void loop() {
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 
 time=pulseIn(echo,HIGH);
 distance=time*0.0340/2;
 Serial.println("Distance:");
 Serial.println(distance);
 Serial.println("cm");

  //part for humidity & temp
  objDHT.read11(dhtpin);
  Serial.print("Current humidity = ");
  Serial.print((float)objDHT.humidity, 3);
  Serial.print("%  \n");
  Serial.print("temperature = ");
  Serial.print((float)objDHT.temperature, 2); 
  Serial.println("c  ");
  delay(3000); //minimum 2 sec delay is needed
}
