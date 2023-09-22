#pragma once
#include "Component.h"

class Mouse : virtual public Component
{
public:
	Mouse();

	void Input();
	void OnDrag();
};

