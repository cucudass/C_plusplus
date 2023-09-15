#pragma once
#include "Mechanic.h"
class Goliath : public Mechanic
{
public:
	Goliath();
	
	void Move();
	virtual void Create() override;
	virtual void Attack() override;

	~Goliath();
};

