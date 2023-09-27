#pragma once
#include <iostream>
#include "Inventory.h"
#include "InputKey.h"

using namespace std;

void GotoXY(int x, int y)
{
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main() {
	Inventory inventory;
	InputKey inputkey;
	InputKey inputkey2;
	Item item;
	//invetory.Renderer();

	for (int i = 0; i < 3; i++) {
		inventory.AddItem();
	}

	while (true) {
		inventory.Renderer();

		inputkey.Move();

		inventory.SelectNumber(inputkey);

		GotoXY(0, 5);
		inventory.ShowItem();

		Sleep(100);
		system("cls");
	}

	return 0;
}
