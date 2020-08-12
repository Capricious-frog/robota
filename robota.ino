#include "robolib.h"

void setup()
{
  hasieratu();
}

void loop()
{
  /* Komandoak
   * 
   * aurrera
   * atzera
   * eskubira
   * ezkerrera
   * gelditu
   * itxaron
   */
  itxaron(2);
  
  //-----------Kodearen hasiera---------------
  aurrera(4);
  eskubira(0.5);
  aurrera (3);
  ezkerrera(0.5);
  aurrera(11);
  //-----------Kodearen bukaera---------------
  
  bukatu();
}
