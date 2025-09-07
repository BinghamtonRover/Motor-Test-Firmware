#include "src/tmc/BURT_TMC.h"
#include "pinouts.h"

void setup()
{
    Serial.begin(115200);

    Serial.print("Stepper motor presetup...");
    stepper.presetup();

    Serial.print("Stepper motor setup");
    stepper.setup();

    stepper.calibrate()
}

void loop()
{
    
}