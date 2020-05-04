#include <Servo.h>
#define servo D4

Servo myServo;
 
void setup () {
  Serial.begin(115200);
  pinMode(servo,OUTPUT);
  myServo.attach(servo);
  myServo.write(30);
}
 
void loop() {
   myServo.write(160);
   Serial.println(myServo.read());
   delay(3000);
   myServo.write(30);
   delay(3000);
}
