#pragma once
#include <iostream>
#include "Item.h"
#include "InputKey.h"
using namespace std;
class Inventory
{
private:
	int size;
	int lineX;
	int selectIndex;
	Item * items;

public:
	Inventory(int x = 5, int y = 3);
	void Renderer();
	void AddItem();
};

