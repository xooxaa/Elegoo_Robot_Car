#ifndef __MOTORFUNCTIONS_H__
#define __MOTORFUNCTIONS_H__

// include libraries and files
#include <Arduino.h>


// define motor shield module IO pins
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11


extern void acc(bool i1, bool i2, bool i3, bool i4, short del);
extern void dec(bool i1, bool i2, bool i3, bool i4, short del);

extern void RFLF(void);
extern void RBLB(void);
extern void RFLB(void);
extern void ROLF(void);
extern void ROLB(void);
extern void RBLF(void);
extern void RFLO(void);
extern void RBLO(void);
extern void ROLO(void);

#endif


