 // analogLED pin can be: 3,5,6,9,10,11
 const int LEDpin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LEDpin,100); //0 to 255 accepted
  delay(4000);
  analogWrite(LEDpin,150); //0 to 255 accepted
  delay(4000);
  analogWrite(LEDpin,200); //0 to 255 accepted
  delay(4000);
  analogWrite(LEDpin,250); //0 to 255 accepted
  delay(4000);
  
}
