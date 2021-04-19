const int Mpin1 = 1;
const int Mpin2 = 2;
const int Mpin3 = 3;
const int Mpin4 = 4;

const int SWpin1 = 12 //Switch connected pin
const int SWpin2 = 13 //Switch connected pin
void setup() {
  Serial.begin(9600);
  pinMode(Mpin1,OUTPUT);
  pinMode(Mpin2,OUTPUT);
  pinMode(Mpin3,OUTPUT);
  pinMode(Mpin4,OUTPUT);
  
  pinMode(SWpin1,INPUT);
  pinMode(SWpin2,INPUT);
}

void loop() {
  int x = digitalRead(SWpin1); //read value (0 or 1)
  int y = digitalRead(SWpin2); //read value (0 or 1)
  
  if(x==1){
    digitalWrite(Mpin1,HIGH);
    digitalWrite(Mpin2,LOW); 
  }else{
    digitalWrite(Mpin1,LOW);
    digitalWrite(Mpin2,HIGH);
  }
  
  if(y==1){
    digitalWrite(Mpin3,HIGH);
    digitalWrite(Mpin4,LOW);
  }else{
    digitalWrite(Mpin3,LOW);
    digitalWrite(Mpin4,HIGH);
  }

}
