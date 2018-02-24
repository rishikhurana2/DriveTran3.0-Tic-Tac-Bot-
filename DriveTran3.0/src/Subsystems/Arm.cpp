#include "Arm.h"

Arm::Arm():Subsystem("Arm"),armTalon(new TalonSRX(4))
{

}
Arm::~Arm() {
	delete armTalon;
}
void Arm::moveArm(double armValue){
	armTalon->Set(ControlMode::PercentOutput,armValue);
}
void Arm::InitDefaultCommand() {
	SetDefaultCommand(new ArmDrive());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
