const int LEDpin = 13;
  
void setup() {
	Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    char data = Serial.read();
    switch(data)
    {
      case 'a': digitalWrite(LEDpin, HIGH);
      break;
      case 'd': digitalWrite(LEDpin, :LOW);
      break;
      default: break;
    }
    delay(100);    
  }
}
