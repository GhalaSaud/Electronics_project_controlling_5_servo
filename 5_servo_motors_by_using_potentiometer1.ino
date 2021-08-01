#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int val;
int va2;
int va3; 
int va4; 
int va5; 

int potpin1 = A4; 
int potpin2 = A3; 
int potpin3 = A2; 
int potpin4 = A1; 
int potpin5 = A0; 

void setup()
{	
servo1.attach(3);
servo2.attach(4);
servo3.attach(5);
servo4.attach(6);
servo5.attach(7);
}

void loop()
{
val = analogRead(potpin1);
va2 = analogRead(potpin2);
va3 = analogRead(potpin3);
va4 = analogRead(potpin4);
va5 = analogRead(potpin5);
  
  // remap the values to degree range which is 0 - 180
val = map(val, 0, 1023, 0, 180);
va2 = map(va2, 0, 1023, 0, 180);
va3 = map(va3, 0, 1023, 0, 180);
va4 = map(va4, 0, 1023, 0, 180);
va5 = map(va5, 0, 1023, 0, 180);
  
  //give the order to move to the servo for each pin
  
  servo1.write(val);
  servo2.write(va2);
  servo3.write(va3);
  servo4.write(va4);
  servo5.write(va5);
  
  delay(15);
}