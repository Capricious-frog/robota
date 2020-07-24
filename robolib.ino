#include "robolib.h"
#include <Arduino.h>
#include <Servo.h>

Servo ezkerreko_motorra;
Servo eskuineko_motorra;

void gelditu()
{
  ezkerreko_motorra.write(90);
  eskuineko_motorra.write(90);
}

void itxaron(float duration)
{
  delay(duration * 1000.0);
}

void atzera(float duration)
{
  ezkerreko_motorra.write(0);
  eskuineko_motorra.write(180);
  itxaron(duration);
  gelditu();
}

void aurrera(float duration)
{
  ezkerreko_motorra.write(180);
  eskuineko_motorra.write(0);
  itxaron(duration);
  gelditu();
}

void ezkerrera(float duration)
{
  ezkerreko_motorra.write(0);
  eskuineko_motorra.write(0);
  itxaron(duration);
  gelditu();
}

void eskubira(float duration)
{
  ezkerreko_motorra.write(180);
  eskuineko_motorra.write(180);
  itxaron(duration);
  gelditu();
}

void giratu(int graduak)
{
  ezkerreko_motorra.write(0);
  eskuineko_motorra.write(0);
  itxaron(1);
  gelditu();
}

void bukatu(){
  while(true);
}

void hasieratu()
{
  ezkerreko_motorra.attach(7);
  eskuineko_motorra.attach(8);
}
