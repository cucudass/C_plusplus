#pragma once
#include "Unit.h"
class Marine : public Unit
{
public:
	Marine();
	void Skill() override;
	void SetHP(int) override;
	void SetMaxHP(int) override;
	void RecoveryHP() override;
	int GetHP() override;
	int GetMaxHP() override;
};

