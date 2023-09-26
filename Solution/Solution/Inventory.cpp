#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	lineX = x;
	selectIndex = 0;
	InputKey inputkey;

	int getx = inputkey.GetX();
	int gety = inputkey.GetY();

	selectIndex = getx / 2 + gety;
	
	size = x * y;
	items = new Item[size];
	for (int i = 0; i < size; i++) {
		items[i].SetCheck(false);
	}
	cout << selectIndex << "\n";
}

void Inventory::Renderer()
{
	for (int i = 0; i < size; i++) {
		if (!items[i].GetCheck()) {
			cout << "□";
		} else {
			cout << "■";
		}
		if ((i + 1) % 5 == 0) {
			cout << endl;
		}
	}
}

void Inventory::AddItem()
{
	for (int i = 0; i < size; i++) {
		if (!items[i].GetCheck()) {
			items[i].SetCheck(true);
			break;
		}
		if (i == size - 1 && items[size - 1].GetCheck())
			cout << "인벤토리 칸이 부족합니다...";
	}
}


