#include "MotorFunctions.h"


void acc(bool i1, bool i2, bool i3, bool i4, short del) 
{
  digitalWrite(IN1,i1);  //set IN1 level
  digitalWrite(IN2,i2);  //set IN2 level
  digitalWrite(IN3,i3);  //set IN3 level
  digitalWrite(IN4,i4);  //set IN4 level
  
  for(short i = 63; i <= 255; i++) //from LOW to HIGH
  { 
    analogWrite(ENB,i);
    analogWrite(ENA,i);
    delay(del);
  } 
}

void dec(bool i1, bool i2, bool i3, bool i4, short del) 
{
  digitalWrite(IN1,i1);  //set IN1 level
  digitalWrite(IN2,i2);  //set IN2 level
  digitalWrite(IN3,i3);  //set IN3 level
  digitalWrite(IN4,i4);  //set IN4 level
  
  for(short i = 255; i >= 63; i--) //from HIGH to LOW
  { 
    analogWrite(ENB,i);
    analogWrite(ENA,i);
    delay(del);
  } 
}

void RFLF()
{ 
  digitalWrite(ENA,HIGH);  //enable L298n A channel
  digitalWrite(ENB,HIGH);  //enable L298n B channel
  digitalWrite(IN1,LOW);   //set IN1 hight level
  digitalWrite(IN2,HIGH);  //set IN2 low level
  digitalWrite(IN3,HIGH);  //set IN3 low level
  digitalWrite(IN4,LOW);   //set IN4 hight level
  //Serial.println("Right Forward, Left Forward: Car goes forward");//send message to serial monitor
}

void RBLB()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  //Serial.println("Right Back, Left Back: Car goes back");
}

void RFLB()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH); 
  //Serial.println("Right Forward, Left Back: Car turns left");
}

void ROLF()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW); 
  //Serial.println("Right Off, Left Forward: Car goes forward and turns right");
}

void ROLB()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH); 
  //Serial.println("Right Off, Left Back: Car goes back and turns left");
}

void RBLF()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  //Serial.println("Right Back, Left Forward: Car turns right");
}

void RFLO()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW); 
  //Serial.println("Right Forward, Left Off: Car goes forward and turns left");
}

void RBLO()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW); 
  //Serial.println("Right Back, Left Off: Car goes backward and turns right");
}

void ROLO()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW); 
  //Serial.println("Right Off, Left Off, Car is stopped");
}

