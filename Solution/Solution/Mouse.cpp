#include "Mouse.h"

Mouse::Mouse()
{
	std::cout << "Create Mouse" << std::endl;
}

void Mouse::Input()
{
	std::cout << "Input Mouse" << std::endl;
}

void Mouse::OnDrag()
{
	std::cout << "Mouse Drag" << std::endl;
}
