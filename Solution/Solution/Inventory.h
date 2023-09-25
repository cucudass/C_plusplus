#pragma once
#include <iostream>
#include "Item.h"
using namespace std;
class Inventory
{
private:
	int size;
	Item * items;

public:
	Inventory(int x = 5, int y = 3);
	void Renderer();

	void AddItem(int i);
};

