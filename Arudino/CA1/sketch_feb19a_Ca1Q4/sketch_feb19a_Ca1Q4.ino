#include <Servo.h>  //Servo library
const int SERVOpin = 3;
Servo objServo; //creating servo objects

void setup() {
  objServo.attach(SERVOpin);
  objServo.write(0); //initial servo to 0 degrees
}
void loop() {
  objServo.write(0); //set servo to 0 degrees
  delay(1000);
  objServo.write(90); //set servo to 90 degrees
  delay(1000);
  objServo.write(180); //set servo to 180 degrees
  delay(1000);
}
