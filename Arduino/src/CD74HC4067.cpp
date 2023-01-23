#include "CD74HC4067.h"
#include "Arduino.h"

///////////////////////////////////////
// Constructor & cd74hc4067
CD74HC4067::CD74HC4067(int s0, int s1, int s2, int s3)
{
    pinMode(s0, OUTPUT);
    pinMode(s1, OUTPUT);
    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    setpincd(s0,s1,s2,s3);
}
// Constructor & cd74hc4067
///////////////////////////////////////


///////////////////////////////////////
// SetpinCd
void CD74HC4067::setpincd(int s0, int s1, int s2, int s3)
{
    pinCd[0] = s0;
    pinCd[1] = s1;
    pinCd[2] = s2;
    pinCd[3] = s3;

}
// SetpinCd
///////////////////////////////////////

///////////////////////////////////////
// setChannel
int CD74HC4067::setChannel(int ch)
{
    for (int i = 0; i < 4; i++)
    {
        digitalWrite(pinCd[i], muxChannel[ch][i]);
    }
}
// setChannel
///////////////////////////////////////

///////////////////////////////////////
// readChannel
int CD74HC4067::readChannel(int pin)
{
    return analogRead(pin);
}
// readChannel
///////////////////////////////////////



