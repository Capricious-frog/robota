#include "robolib.h"
#include <Arduino.h>
#include <Servo.h>

//------------Konfigurazioaren hasiera-----------------
aurrera_balioa = 180
atzera_balioa = 0
gelditu_balioa = 90
  
pin_ezkerreko_motorra = 7
pin_eskubiko_motorra = 8

//------------Konfigurazioaren bukaera-----------------

Servo ezkerreko_motorra;
Servo eskuineko_motorra;

void gelditu()
{
  ezkerreko_motorra.write(gelditu_balioa);
  eskuineko_motorra.write(gelditu_balioa);
}

void itxaron(float duration)
{
  delay(duration * 1000.0);
}

void atzera(float duration)
{
  ezkerreko_motorra.write(atzera_balioa);
  eskuineko_motorra.write(aurrera_balioa);
  itxaron(duration);
  gelditu();
}

void aurrera(float duration)
{
  ezkerreko_motorra.write(aurrera_balioa);
  eskuineko_motorra.write(atzera_balioa);
  itxaron(duration);
  gelditu();
}

void ezkerrera(float duration)
{
  ezkerreko_motorra.write(atzera_balioa);
  eskuineko_motorra.write(atzera_balioa);
  itxaron(duration);
  gelditu();
}

void eskubira(float duration)
{
  ezkerreko_motorra.write(aurrera_balioa);
  eskuineko_motorra.write(aurrera_balioa);
  itxaron(duration);
  gelditu();
}

void bukatu(){
  while(true);
}

void hasieratu()
{
  ezkerreko_motorra.attach(pin_ezkerreko_motorra);
  eskuineko_motorra.attach(pin_eskubiko_motorra);
}
