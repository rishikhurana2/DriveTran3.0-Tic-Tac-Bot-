#ifndef OI_H
#define OI_H
#include <WPILib.h>

class OI {
public:
	OI();
	~OI();
	Joystick* getLeftJoystick();
	Joystick* getRightJoystick();
	Joystick* getArmJoystick();
private:
	Joystick* joystickLeft;
	Joystick* joystickRight;
	Joystick* joystickArm;
};
#endif  // OI_H
