#ifndef ArmDrive_H
#define ArmDrive_H

#include "../CommandBase.h"
#include "../CommandBase.cpp"
#include <WPILib.h>
#include "../RobotMap.h"

class ArmDrive : public CommandBase {
public:
	ArmDrive();
	~ArmDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ArmDrive_H
