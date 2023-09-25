#include "Item.h"

Item::Item(int price, const char * name)
{
	this->price = price;
	this->name = name;
}

void Item::SetCheck(bool check)
{
	this->check = check;
}

bool Item::GetCheck()
{
	return this->check;
}
