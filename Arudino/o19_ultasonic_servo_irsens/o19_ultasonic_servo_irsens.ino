
#define IRSensor = 10;

#define echo 11;
#define trigger 12;

#define SERVOpin 1;
Servo objServo; //creating servo objects

void setup() {
 Serial.begin(9600);
 pinMode (IRSensor, INPUT);
 pinMode(echo,INPUT);
 pinMode(trigger,OUTPUT);

  objServo.attach(SERVOpin);
  objServo.write(0); //set servo to 0 degrees
}

void loop() { 
 
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 
 time=pulseIn(echo,HIGH);
 distance=time*0.0340/2; //dist in cm

  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1){
    // noobject
    objServo.write(0);
  }else{
    Serial.println("Person detected!");
    if(distance<=200){
      Serial.println("OBJECT NEAR!");
      objServo.write(90);
    }else{
      //object not near enough
      objServo.write(0);
    }
  }
  delay(1000);

}
