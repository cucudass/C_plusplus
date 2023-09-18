#pragma once
#include "Unit.h"
class Marine : public Unit
{
public:
	Marine();
	void Skill() override;
	void SetHP(int) override;
	int GetHP() override;
};

