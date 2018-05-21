#include "ServoFunctions.h"


  
void turnServo(Servo myservo, short angle)
{
  
  myservo.write(angle);

}
