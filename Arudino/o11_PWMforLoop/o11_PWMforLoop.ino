const int LEDpin = 11; // analogLED pin can be: 3,5,6,9,10,11

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  for(int i=0; i<255; i=i+5){
    analogWrite(LEDpin, i); //0 to 255 accepted
    delay(2000);
  }
  for(int i=255; i>0; i=i-5){
    analogWrite(LEDpin, i); //0 to 255 accepted
    delay(2000);
  }
  
}
