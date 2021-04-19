#define trigger 12
#define echo 11

define LEDpin 13

float time=0, distance=0;

void setup() {
 Serial.begin(9600);
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(LEDpin,INPUT);
 
 Serial.println("Distance Meter with ultrasonic sensor");
 Serial.println("DHT11 Humidity & temperature Sensor\n\n");
}

void loop() {
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 
 time=pulseIn(echo,HIGH);
 distance=time*0.0340/2;
 Serial.println("Distance:");
 Serial.println(distance);
 Serial.println("cm");

  if(distance<100){
    Serial.println("OBJECT DETECTED!");
    digitalWrite(LEDpin,HIGH);
  }else{
    digitalWrite(LEDpin,LOW);
  }
}
