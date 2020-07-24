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

void itxaron(int duration)
{
  delay(duration * 1000);
}

void aurrera(int duration)
{
  ezkerreko_motorra.write(0);
  eskuineko_motorra.write(180);
  itxaron(duration);
  gelditu();
}

void atzera(int duration)
{
  ezkerreko_motorra.write(180);
  eskuineko_motorra.write(0);
  itxaron(duration);
  gelditu();
}

void eskubira(int duration)
{
  ezkerreko_motorra.write(0);
  eskuineko_motorra.write(0);
  itxaron(duration);
  gelditu();
}

void ezkerrera(int duration)
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

void hasieratu()
{
  ezkerreko_motorra.attach(7);
  eskuineko_motorra.attach(8);
}
