#include "UltrasonicFunctions.h"

//Ultrasonic distance measurement Sub function
int Distance_test() 
{
  digitalWrite(Trig, LOW);   
  delayMicroseconds(3);
  //noInterrupts();
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);   
  float Fdistance = pulseIn(Echo, HIGH);  
  //interrupts();
  Fdistance= Fdistance / 58;       
  return (int)Fdistance;
}  
