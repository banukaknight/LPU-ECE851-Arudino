const int LEDpin = 11; //LED connected pin

void setup() {
  pinMode(LEDpin,OUTPUT); //set pin as output
}

void loop() {
  for(int i=0; i<255; i=i+25){
    analogWrite(LEDpin, i); //0 to 255 accepted
    delay(250);
  }
  for(int i=255; i>0; i=i-25){
    analogWrite(LEDpin, i); //0 to 255 accepted
    delay(250);
  }
}
