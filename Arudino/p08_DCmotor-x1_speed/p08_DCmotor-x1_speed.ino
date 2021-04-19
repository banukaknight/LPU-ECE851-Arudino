const int Mpin1 = 13;
const int Mpin2 = 12;
int Vspin1 = 11;

void setup() {
  pinMode(Mpin1,OUTPUT);
  pinMode(Mpin2,OUTPUT);
  pinMode(Vspin1,OUTPUT);
}

void loop() {
  digitalWrite(Mpin1,HIGH); //clockwise
  digitalWrite(Mpin2,LOW);
  
  analogWrite(Vspin1,50); //0 to 255 accepted
  delay(3000);
  analogWrite(Vspin1,255); //0 to 255 accepted
  delay(4000);
  analogWrite(Vspin1,0); //0 to 255 accepted
  delay(1000);
//
//    digitalWrite(Mpin1,LOW);
//  digitalWrite(Mpin2,HIGH);
//  for(int i=0; i<255; i=i+25){
//    analogWrite(Vspin1,i);
//    delay(500);
//  }
//  delay(2000);

  
}
