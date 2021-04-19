const int LEDpin = 11; //LED connected pin
int POTdelay = A1; //POT connected pin
int POTbright = A2; //POT connected pin
int delayVal = 0; //variavle to store pot value
int brightVal = 0; //variable to store pot value

void setup() {
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT); //set pin as output
}

void loop() {
  delayVal = analogRead(POTdelay); //read POT value for delay
  brightVal = analogRead(POTbright); //read POT value for brightess
  brightVal = map(brightVal,0,1023,0,255); //change range of val
  Serial.println("\nDelay: "+ String(delayVal) );
  Serial.println("Brightness: "+ String(brightVal) );
  
  analogWrite(LEDpin, brightVal);  //PWM val - 0 to 255 accepted
  delay(delayVal); //set duration for LED to be ON for
  analogWrite(LEDpin,0); //turn off LED
  delay(delayVal); //set duration for LED to be OFF for
}
