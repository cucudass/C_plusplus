#pragma once
#include "Mechanic.h"
class Tank : public Mechanic
{
public:
	Tank();
	
	void Move();
	virtual void Create() override;
	virtual void Attack() override;

	~Tank();
};

