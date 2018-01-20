#include "motor.h"
#include "variabeln.h"
#include "usSensor.h"



void setup() {
  SensorSetup();
}


      
void loop()
{
  sensorUS1();
  sensorUS2();
  sensorUS3();
}

