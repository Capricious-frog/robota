#ifdef ROBOTA_H
#define ROBOTA_H

#include <Arduino.h>

Servo ezkerreko_motorra;
Servo eskuineko_motorra;

void aurrera(float duration);
void atzera(float duration);
void eskubira(float duration);
void ezkerrera(float duration);
void giratu( graduak);
void gelditu();
void itxaron(float duration);
void bukatu();
void hasieratu();

#endif
