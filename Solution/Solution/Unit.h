#pragma once
#include <iostream>
using namespace std;

class Unit
{
protected:
	int health;
	int defense;
	int maxHp;

public:
	virtual int GetHP() = 0;
	virtual void SetHP(int value) = 0;

	virtual int GetMaxHP() = 0;
	virtual void SetMaxHP(int maxhp) = 0;
	virtual void RecoveryHP() = 0;
	virtual void Skill() = 0;
};

