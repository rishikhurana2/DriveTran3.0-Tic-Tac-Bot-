#include "DriveTrainSubsystem.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"

DriveTrainSubsystem::DriveTrainSubsystem():
Subsystem("DriveTrainSubsystem"),
 talonLeft(new TalonSRX(1)),
 talonRight(new TalonSRX(2))
{

}
DriveTrainSubsystem::~DriveTrainSubsystem()
{
	delete talonLeft;
	delete talonRight;
}
void DriveTrainSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new TankDrive());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}
void DriveTrainSubsystem::tankDrive(double leftValue, double rightValue)
{
	talonLeft->Set(ControlMode::PercentOutput,leftValue);
	talonRight->Set(ControlMode::PercentOutput, rightValue);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
