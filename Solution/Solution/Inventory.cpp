#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	lineX = x;
	selectIndex = 0;

	size = x * y;
	items = new Item[size];
	for (int i = 0; i < size; i++) {
		items[i].SetCheck(false);
	}
}

int Inventory::GetSelectIndex()
{
	return selectIndex;
}

void Inventory::Renderer()
{
	for (int i = 0; i < size; i++) {
		if (!items[i].GetCheck()) {
			cout << "��";
		} else {
			cout << "��";
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
			items[i].SetItem(100 * i, "Postion");
			items[i].SetCheck(true);
			break;
		}
		if (i == size - 1 && items[size - 1].GetCheck())
			cout << "�κ��丮 ĭ�� �����մϴ�...";
	}
}

void Inventory::SelectNumber(InputKey inputkey)
{
	// ex 2 / 2 = 1����, 1/2 = 0����...
	int resultX = inputkey.GetX() / 2;

	//ex () * 5...
	int resultY = inputkey.GetY() * lineX;

	selectIndex = resultX + resultY;
}

void Inventory::ShowItem()
{
	if (items[selectIndex].GetCheck())
		items[selectIndex].Information();
	else
		cout << "Item�� �������� �ʽ��ϴ�.\n";
}


