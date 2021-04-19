#include <SoftwareSerial.h> 
SoftwareSerial btSerial(10,11); //RX,TX
const int LEDpin = 13;
  
void setup() {
  pinMode(LEDpin,OUTPUT);
  btSerial.begin(38400);
}

void loop() {
  if(btSerial.available()>0)
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
