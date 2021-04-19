const int POTpin = A0;
const int LEDpin = D1;
int POTval = 0;

void setup() {
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  POTval = analogRead(POTpin);
  digitalWrite(LEDpin,HIGH);
  delay(POTval);
  digitalWrite(LEDpin,LOW);
  delay(POTval);
}
