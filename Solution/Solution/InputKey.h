#pragma once
#include <Windows.h>
#include <conio.h>

using namespace std;

// 상하좌우 상수값 설정
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32;

class InputKey
{
private:
	int x;
	int y;
	char key;

public:
	int GetX();
	int GetY();

	InputKey();
	void Move();
	void GotoXY(int x, int y);
};

