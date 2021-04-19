#include <SoftwareSerial.h> 
SoftwareSerial btSerial(10,11); //RX,TX
const int LEDpin = 13;
  
void setup() {
  pinMode(LEDpin,OUTPUT);
  btSerial.begin(38400);
  Serial.begin(9600);
  
}

void loop() {
  if(Serial.available())
  {
    char data = Serial.read();
    switch(data)
    {
      case '1': digitalWrite(LEDpin, HIGH);
      break;
      case '0': digitalWrite(LEDpin, :LOW);
      break;
      default: break;
    }
    delay(25);    
  }

  
  if(btSerial.available())
  {
    char data = btSerial.read();
    switch(data)
    {
      case '1': digitalWrite(LEDpin, HIGH);
      break;
      case '0': digitalWrite(LEDpin, :LOW);
      break;
      default: break;
    }
    delay(25);    
  }
  
}
