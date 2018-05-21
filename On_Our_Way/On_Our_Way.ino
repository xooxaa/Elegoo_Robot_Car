#include "MotorFunctions.h"
#include "ServoFunctions.h"
#include "UltrasonicFunctions.h"
#include "GeneralFunctions.h"



  

bool a = false;
int middleDistance = 1;
short servoPosition = 90;
int deltime;


void setup() 
{
  //open serial and set the baudrate
  Serial.begin(9600);

  //set pin modes for motor control module
  pinMode(IN1,OUTPUT); 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);

  //set servo pin and move servo to center position (90°)
  Servo myservo;
  myservo.attach(SER);
  
  turnServo(myservo, servoPosition);
  // turnServo(45);
  

  //set pin modes for ultrasonic module
  pinMode(Echo, INPUT);    
  pinMode(Trig, OUTPUT);
}


void loop() 
{
  // Servo myservo;
  // myservo.attach(SER);
  deltime = 100;

  // measure current distance and print current car state
  middleDistance = Distance_test();
  if (middleDistance > 400)
  {
    middleDistance = 0;
  }
  printCurrentState(a, servoPosition, middleDistance);  




  
  if ((!a) && (middleDistance > 30))
  {
    acc(LOW, HIGH, HIGH, LOW, 1);
    a = true;
    deltime = 1;
  }
  else
  {
    if ((middleDistance <= 30))
    {
      if (a)
      {
        dec(LOW, HIGH, HIGH, LOW, 1);
        ROLO();
        deltime = 1;
      }
      
      // turnServo(myservo, 45);
      middleDistance = Distance_test();
      if (middleDistance > 30)
      {
        a = false;
      }        
    }
  }
  
  delay(deltime);
}
