#include <SoftwareSerial.h>
SoftwareSerial btSerial(10,11); // RX-TX

void setup() {
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  btSerial.begin(38400);
  pinMode(13,OUTPUT);
}

void loop() {
  if (btSerial.available())
    Serial.write(btSerial.read());
    digitalWrite(13,HIGH);

  if (btSerial.available())
    btSerial.write(Serial.read());
    digitalWrite(13,LOW);
}
