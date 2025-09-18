#include "states.h"

states::states(int RSwitchR, int RSwitchL, int LSwitchR, int LSwitchL, int pot, int butt) :
    RSwitchR(RSwitchR), RSwitchL(LSwitchL), LSwitchR(LSwitchR), LSwitchL(LSwitchL), pot(pot), butt(butt)
    {}

states::setup()
{

    pinMode(RSwitchR, INPUT);
    pinmode(RSwitchL, INPUT);
    pinMode(LSwitchR, INPUT);
    pinmode(LSwitchL, INPUT);
    pinMode(pot, INPUT);

    pinMode(butt, OUTPUT);

}
