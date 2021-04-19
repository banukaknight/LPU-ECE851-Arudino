const int Mpin1 = 13;
const int Mpin2 = 12;

void setup() {
  pinMode(Mpin1,OUTPUT);
  pinMode(Mpin2,OUTPUT);
}

void loop() {
  digitalWrite(Mpin1,LOW);
  digitalWrite(Mpin2,LOW);
  delay(2000);
  digitalWrite(Mpin1,HIGH);
  digitalWrite(Mpin2,LOW);
  delay(2000);
  digitalWrite(Mpin1,LOW);
  digitalWrite(Mpin2,HIGH);
  delay(2000);
  digitalWrite(Mpin1,HIGH);
  digitalWrite(Mpin2,HIGH);
  delay(2000);
  
}
