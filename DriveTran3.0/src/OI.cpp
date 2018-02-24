#include "OI.h"

#include <WPILib.h>

OI::OI():
joystickLeft(new Joystick(0)),
joystickRight(new Joystick(1)),
joystickArm(new Joystick(3)) {
	// Process operator interface input here.
}
OI::~OI() {
	delete joystickLeft;
	delete joystickRight;
	delete joystickArm;
}
Joystick* OI::getLeftJoystick() {
	return joystickLeft;
}
Joystick* OI::getRightJoystick() {
	return joystickRight;
}
Joystick* OI::getArmJoystick(){
	return joystickArm;
}

