#ifdef ROBOTA_H
#define ROBOTA_H

#include <Arduino.h>

Servo ezkerreko_motorra;
Servo eskuineko_motorra;

void aurrera(int duration);
void atzera(int duration);
void eskubira(int duration);
void ezkerrera(int duration);
void giratu(int graduak);
void gelditu();
void itxaron(int duration);
void hasieratu();

#endif
