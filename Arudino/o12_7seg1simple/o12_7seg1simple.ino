const int segA=2;
const int segB=3;
const int segC=4;
const int segD=5;
const int segE=6;
const int segF=7;
const int segG=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);

}

void loop() {
  //roll no A27 ( Banuka Vidusanka )

  // on -A
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
//  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);

  delay(2000);
  
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
//  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);

// on-2
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
//  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
//  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);

  delay(2000);
  
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
//  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
//  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);

// on-7
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
//  digitalWrite(segD,HIGH);
//  digitalWrite(segE,HIGH);
//  digitalWrite(segF,HIGH);
//  digitalWrite(segG,HIGH);

  delay(2000);

  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
//  digitalWrite(segD,LOW);
//  digitalWrite(segE,LOW);
//  digitalWrite(segF,LOW);
//  digitalWrite(segG,LOW);

  delay(4000);
  }
