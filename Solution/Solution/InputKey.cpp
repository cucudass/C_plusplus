#include "InputKey.h"

InputKey::InputKey()
{
	x = 0;
	y = 0;
	key = 0;
}

int InputKey::GetX()
{
	return this->x;
}

int InputKey::GetY()
{
	return this->y;
}

void InputKey::Move()
{
	// ��ũ���� ����� �Լ�
	//system("cls");

	GotoXY(x, y);
	if (_kbhit()) { // Ű���� �Է��� Ȯ���ϴ� �Լ�
		key = _getch();

		if (key == -32) {
			key = _getch();
		}

		switch (key) {
			case UP:
				if (y > 0)
					y--;
				break;
			case LEFT:
				if (x > 0)
					x -= 2;
				break;
			case RIGHT:
				if (x < 8)
					x += 2;
				break;
			case DOWN:
				if (y < 2)
					y++;
				break;
		}
	}
}

void InputKey::GotoXY(int x, int y)
{
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
