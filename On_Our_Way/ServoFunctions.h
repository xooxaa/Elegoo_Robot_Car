#ifndef __SERVOFUNCTIONS_H__
#define __SERVOFUNCTIONS_H__

// include libraries and files
#include <Arduino.h>
#include <Servo.h>


// define servo name and pin
#define SER 3


extern void turnServo(Servo myservo, short angle);

#endif
