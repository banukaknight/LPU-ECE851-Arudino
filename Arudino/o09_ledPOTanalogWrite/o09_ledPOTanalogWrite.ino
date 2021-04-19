const int POTpin = A0;
// analogLED pin can be: 3,5,6,9,10,11
const int LEDpin = 11;
int POTval = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  POTval = analogRead(POTpin);
  analogWrite(LEDpin,POTval);
  Serial.println(POTval);
}
