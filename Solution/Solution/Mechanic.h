#pragma once
#include <iostream>
using namespace std;

class Mechanic
{
protected:
	int health;
	int attack;

public:
	Mechanic();
	void Move();
	virtual void Create();
	virtual void Attack();

	virtual ~Mechanic();
};

