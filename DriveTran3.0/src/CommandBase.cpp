#include "CommandBase.h"

#include <Commands/Scheduler.h>


// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
DriveTrainSubsystem * CommandBase::drive = nullptr;
Arm * CommandBase::arm = nullptr;
std::unique_ptr<OI> CommandBase::oi;

CommandBase::CommandBase(const std::string &name):
frc::Command(name)
{

}
void CommandBase::initialize(){
	drive = new DriveTrainSubsystem();
	arm = new Arm();
}
