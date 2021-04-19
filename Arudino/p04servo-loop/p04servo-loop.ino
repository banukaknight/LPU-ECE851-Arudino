#include <Servo.h>
const int SERVOpin = 3;
Servo objServo; 

void setup() {
  objServo.attach(SERVOpin);
}

void loop() {
  for(int i=0; i<180; i=i+10){
    objServo.write(i);
    delay(100);
  }
  delay(1000);
    for(int i=180; i<180; i=i-0){
    objServo.write(i);
    delay(100);
  }
  
}
