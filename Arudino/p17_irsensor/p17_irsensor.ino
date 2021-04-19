int IRSensor = 10;
int LEDpin = 13;

void setup() 
{
  Serial.begin(9600);
  pinMode (IRSensor, INPUT);
  pinMode (LEDpin, OUTPUT);
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
 
  if (statusSensor == 1){
    digitalWrite(LEDpin, LOW);
  }else{
    digitalWrite(LEDpin, HIGH);
    Serial.println("Intruder ALERT!");
  }
  delay(1000);
}
