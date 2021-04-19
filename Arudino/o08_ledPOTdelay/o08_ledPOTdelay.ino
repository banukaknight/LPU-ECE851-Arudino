const int POTpin = A0;
const int LEDpin = 12;
int POTval = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  POTval = analogRead(POTpin);
  digitalWrite(LEDpin,HIGH);
  delay(POTval);
  digitalWrite(LEDpin,LOW);
  Serial.println(POTval);
}
