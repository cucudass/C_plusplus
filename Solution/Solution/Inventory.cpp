#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	size = x * y;
	items = new Item[size];
	for (int i = 0; i < size; i++) {
		items[i].SetCheck(false);
	}
}

void Inventory::Renderer()
{
	char itembox;// = 'бр';
	for (int i = 0; i < size; i++) {
		if (!items[i].GetCheck()) {
			itembox = '-';
		} else {
			itembox = '*';
		}
		if ((i + 1) % 5 == 0) {
			cout << "[" << itembox << "]" << endl;
		}
		else {
			cout << "[" << itembox << "]" << ", ";
		}
	}
}

void Inventory::AddItem(int i)
{
	
}


