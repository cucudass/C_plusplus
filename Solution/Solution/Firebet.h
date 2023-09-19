#pragma once
#include "Unit.h"
class Firebet : public Unit
{
public:
	Firebet();
	void Skill() override;
	void SetHP(int) override;
	void SetMaxHP(int) override;
	void RecoveryHP() override;

	int GetHP() override;
	int GetMaxHP() override;
};

