#pragma once
#include "Component.h"

class Keyboard : virtual public Component
{
public:
	Keyboard();

	void Input();
	void OnButton();
};

