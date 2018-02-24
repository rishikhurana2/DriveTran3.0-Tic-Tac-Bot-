#ifndef DriveTrainSubsystem_H
#define DriveTrainSubsystem_H

#include "ctre/Phoenix.h"
#include <Commands/Subsystem.h>
#include "WPILib.h"


class DriveTrainSubsystem : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* talonLeft;
	TalonSRX* talonRight;
public:
	DriveTrainSubsystem();
	~DriveTrainSubsystem();
	void InitDefaultCommand();
	void tankDrive(double leftValue, double rightValue);
};

#endif  // DriveTrainSubsystem_H
