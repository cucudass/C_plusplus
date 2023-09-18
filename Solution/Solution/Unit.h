#pragma once
#include <iostream>
using namespace std;

class Unit
{
protected:
	int health;
	int defense;

public:
	virtual int GetHP() = 0;
	virtual void SetHP(int value) = 0;

	virtual void Skill() = 0;
};

