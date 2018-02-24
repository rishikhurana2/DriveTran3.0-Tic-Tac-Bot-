#ifndef TankDrive_H
#define TankDrive_H

#include "../CommandBase.h"
#include <WPILib.h>

class TankDrive : public CommandBase {
public:
	TankDrive();
	~TankDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TankDrive_H
