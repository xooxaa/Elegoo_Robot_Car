#include "GeneralFunctions.h"

//Ultrasonic distance measurement Sub function
void printCurrentState(bool a, short servoPosition, int middleDistance) 
{
  Serial.print("a: ");
  Serial.print(a);
  Serial.print(", Servo: ");
  Serial.print(servoPosition);
  Serial.print(", Entfernung: ");
  
  
  if (middleDistance > 400)
  {
    middleDistance = 0;
    Serial.println("nicht Messbar");
  }
  else
  {
    Serial.print(middleDistance);
    Serial.println(" cm");
  }
}  
