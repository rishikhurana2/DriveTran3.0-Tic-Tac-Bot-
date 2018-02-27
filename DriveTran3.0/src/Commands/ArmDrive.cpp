#include "ArmDrive.h"

ArmDrive::ArmDrive() {
	Requires(arm);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ArmDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ArmDrive::Execute() {
	double armValue = oi->getArmJoystick()->GetY();
	arm->moveArm(armValue);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArmDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmDrive::Interrupted() {

}
