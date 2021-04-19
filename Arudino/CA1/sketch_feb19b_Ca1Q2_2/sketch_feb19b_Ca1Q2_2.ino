const int LEDpin = 12; //LED connected pin
const int SWpin = 2; //Switch connected pin

void setup() {
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
  pinMode(SWpin,INPUT);
  Serial.println("Program by Banuka");  
}

void loop() {
  int x = digitalRead(SWpin); //read value (0 or 1)
  if(x==1){
    digitalWrite(LEDpin,HIGH);
    Serial.println("LED is ON: "+ x);
  }else{
    digitalWrite(LEDpin,LOW);
    Serial.println("LED is OFF: "+ x);
  }
  
}
