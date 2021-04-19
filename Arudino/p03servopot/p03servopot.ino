#include <Servo.h>  //Servo library
const int POTpin = A0;
const int SERVOpin = 3;
int POTval = 0;
Servo objServo; //creating servo objects

void setup() {
  objServo.attach(SERVOpin);
  objServo.write(0); //set servo to 0 degrees
}

void loop() {
 POTval = analogRead(POTpin);
 int ServoVal = map(POTval, 0,1023,0,180);
 objServo.write(ServoVal);
 
}
