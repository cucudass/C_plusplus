#pragma once
#include "Unit.h"
class Ghost : public Unit
{
public:
	Ghost();
	void Skill() override;
	void SetHP(int) override;
	void SetMaxHP(int) override;
	void RecoveryHP() override;

	int GetHP() override;
	int GetMaxHP() override;
};

