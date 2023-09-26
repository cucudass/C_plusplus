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
	// 스크린을 지우는 함수
	//system("cls");

	GotoXY(x, y);
	if (_kbhit()) { // 키보드 입력을 확인하는 함수
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
