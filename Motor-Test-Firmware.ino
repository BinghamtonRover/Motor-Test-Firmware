#include "src/TMC-Firmware/BURT_TMC.h"
#include "pinouts.h"

void setup()
{
    // servo.attach(25);
    Serial.begin(115200);

    Serial.print("Stepper motor presetup...");
    stepper.presetup();

    delay(500);

    Serial.print("Stepper motor setup");
    stepper.setup();

    delay(500);

    stepper.calibrate();

    pinMode(21, OUTPUT);
}

void loop()
{
    digitalWrite(21, HIGH);
    // servo.writeMicroseconds(2000);
    // stepper.moveBySteps(40000);
    
    delay(15000);
    stepper.moveTo(PI);


    // stepper.update();

    delay(15000);
    stepper.moveTo(0);
    // delay(1000);
    // servo.writeMicroseconds(1000);
    // delay(1000);
    // servo.writeMicroseconds(2000);
    // delay(1000);
    // stepper.moveBySteps(-360);
    // delay(2500);
}