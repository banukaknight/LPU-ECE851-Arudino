#include<Servo.h>
Servo servo;
void setup()
{
  servo.attach(9);
  servo.write(0);//initial position to 0 degree
  delay(2000);
}
void loop(){
  servo.write(90);
  delay(1000);
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
}
