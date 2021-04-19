//prepare arduino IDE sketch to blink LED connected on pin d1 of NodeMCU board
const int LEDpin = D1;

void setup() {
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  digitalWrite(LEDpin,HIGH);
  delay(1000);
  digitalWrite(LEDpin,LOW);
  delay(1000);
  
}
