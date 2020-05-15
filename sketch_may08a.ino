#include <Servo.h>
Servo myservo;
float a =(0,0);
void setup(){ 
  for ( int i =0; i<50; i++);
  a+=analogRead(A0);
  delay (100);
  myservo.attach(13);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  myservo.write(79);
  a=((a/50)-5.0);
  Serial.println("OK");
}


void loop() {
  Serial.println(analogRead(A0));
  delay (1);
  if (analogRead(A0) <a); {
    myservo.write(66);
    delay (103); 

    myservo.write(79);
    delay (10);
  }
}
