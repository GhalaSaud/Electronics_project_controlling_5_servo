# Electronics_project_controlling_5_servo
The Arduino development board was used to control 5 servos to move 90 degrees, which was then controlled by a potentiometer variable.
### **Component List:**
1. Arduino Uno R3
2. Breadboard
3. 5 Servo motors
4. Potentiometers

### **First circuit**
![Electronics-5 servo motors arduino](https://user-images.githubusercontent.com/88051753/127782691-a0622da9-1c75-4c51-8477-a0ee5c08711d.png)

### **Steps:**
1. Connect power and ground to the circuit 
2. Connect the signal pins in the motor to digital pins in Arduino (3 to 7) 
### **Code of the first circuit**

`#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(7);
}

void loop()
{
 servo1.write(90);
 servo2.write(90);
 servo3.write(90);
 servo4.write(90);
 servo5.write(90);
}`
### **Simulation of first circuit:**
https://www.tinkercad.com/things/dKMfIqHHIax-5-servo-motors/editel?sharecode=ytAqSbD05NoByQ1T24WLoyk6bQ8gQLpr7g5USgvWurY 
### **Second circuit:**
![Electronics-5 servo motors by using potentiometer](https://user-images.githubusercontent.com/88051753/127782877-e050dbba-80ff-4a89-9068-a2e2ce7e79ac.png)
### **Steps:**
1. Connect power and ground to the circuit 
2. Connect the signal pins in the motor to digital pins in Arduino (3 to 7) 
3. Connect potentiometer wiper to the analogs pins in Arduino (A0 to A5) 
### **Code of the second circuit:**

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
  
val = map(val, 0, 1023, 0, 180);
va2 = map(va2, 0, 1023, 0, 180);
va3 = map(va3, 0, 1023, 0, 180);
va4 = map(va4, 0, 1023, 0, 180);
va5 = map(va5, 0, 1023, 0, 180);
    
servo1.write(val);
servo2.write(va2);
servo3.write(va3);
servo4.write(va4);
servo5.write(va5);
  
delay(15);
}
### **Simulation of the second circuit:**
https://www.tinkercad.com/things/3dFYfXsTgVC-5-servo-motors-by-using-potentiometer/editel?sharecode=pzgi8eS3g2kpPLlzJoUdPa_18oGTbpavAGWhYQ_3aOM 
