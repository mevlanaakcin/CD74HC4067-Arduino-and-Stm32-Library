#include "CD74HC4067.h"
/*
CD74HC4067 xxx(s0,s1,s2,s3)

SIGPIN is output pin.
*/
CD74HC4067 mymux(8, 9, 10, 11);
int SIGPIN = 7;

void setup()
{
    pinMode(SIGPIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{

    for (int i = 0; i < 16; i++)
    {
        Serial.print("PIN ");
        Serial.println(i);
        mymux.setChannel(i);
        digitalWrite(SIGPIN, HIGH);
        delay(1000);
        digitalWrite(SIGPIN, LOW);
        delay(1000);
    }
}
