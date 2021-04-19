//prep aduino ide sketch to print hello world in loop
// using serial monitor on nodeMCU

void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.println("Hello World! \n");
  delay(2000);
}
