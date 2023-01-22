#include "CD74HC4067.h"
/*
AnalogRead_CD xxx(s0,s1,s2,s3)

SIGPIN is analog read pin.
*/
AnalogRead_CD mymux(8, 9, 10, 11);
int SIGPIN = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  for (int i = 0; i < 16; i++)
  {
    mymux.setChannel(i);
    Serial.print("READ PIN NUMBER ");
    Serial.print(i);
    Serial.print(" :");
    Serial.println(mymux.readChannel(SIGPIN));
    delay(1000);
  }
}
