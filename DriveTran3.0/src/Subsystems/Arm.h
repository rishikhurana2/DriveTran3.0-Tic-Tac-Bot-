#ifndef Arm_H
#define Arm_H

#include <WPILib.h>
#include <Commands/Subsystem.h>
#include "ctre/Phoenix.h"
#include "../RobotMap.h"
#include"OI.cpp"
#include "../Commands/ArmDrive.h"

class Arm : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Arm();
	~Arm();
	void moveArm(double armValue);
	void InitDefaultCommand();
private:
	TalonSRX* armTalon;
};
#endif  // Arm_H
