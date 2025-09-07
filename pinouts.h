#include "src/tmc/BURT_TMC.h"

StepperMotorPins swivelPins = {
	enable: 8,
	chipSelect: 3,
};

StepperMotorConfig swivelConfig = {
	name: "stepper",
	current: 2000,
	speed: 200'000,
	acceleration: 200'000,
	stepsPerUnit: microstepsPerRadian * 47,
};

StepperMotor stepper(swivelPins, swivelConfig);