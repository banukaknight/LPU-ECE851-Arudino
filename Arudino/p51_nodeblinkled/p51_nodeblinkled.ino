//prepare arduino IDE sketch to blink LED connected on pin d1 of NodeMCU board
const int LEDpin = D1;
const int SWpin = D2;

void setup() {
  pinMode(LEDpin,OUTPUT);
  pinMode(SWpin,INPUT);
}

void loop() {
  int x = digitalRead(SWpin);
    if(x==1){
    digitalWrite(LEDpin,HIGH);
  }else{
    digitalWrite(LEDpin,LOW);
  }  
}
