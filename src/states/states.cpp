#include "states.h"

states::states(int RSwitchR, int RSwitchL, int LSwitchR, int LSwitchL, int pot, int butt) :
    RSwitchR(RSwitchR), RSwitchL(LSwitchL), LSwitchR(LSwitchR), LSwitchL(LSwitchL), pot(pot), butt(butt)
    {}

void states::setup()
{

    pinMode(RSwitchR, INPUT);
    pinmode(RSwitchL, INPUT);
    pinMode(LSwitchR, INPUT);
    pinmode(LSwitchL, INPUT);
    pinMode(pot, INPUT);

    pinMode(butt, OUTPUT);

}

int states::RSwitchState()
{

    if (( RSwitchR == HIGH ) && ( RSwitchL == LOW ))
    {
        return 2;
    }

    else if (( RSwitchR == LOW ) && ( RSwitchL == HIGH ))
    {
        return 1;
    }

    else if (( RSwitchR == LOW ) && ( RSwitchL == HIGH ))
    {
        return 0;
    }
}

int states::LSwitchState()
{

    if (( LSwitchR == HIGH ) && ( LSwitchL == LOW ))
    {
        return 2;
    }

    else if (( LSwitchR == LOW ) && ( LSwitchL == HIGH ))
    {
        return 1;
    }

    else if (( LSwitchR == LOW ) && ( LSwitchL == HIGH ))
    {
        return 0;
    }
}

int potVal()
{
    return analogRead(pot);
}