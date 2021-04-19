//prep sketch to control brightness of LED connected on D0with pot

const int POTpin = A0;
const int LEDpin = D1;
int POTval = 0;

void setup() {
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  POTval = analogRead(POTpin);
  analogWrite(LEDpin,POTval);
  //delay(500);
}
