#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

#pragma region ���� �����̳�
/*
�����͸� �������� �����ϸ�, Ư���� �����̳� ��Ģ�� ���� �Ϲ����� �����̳�
*/
#pragma endregion

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int createCount;

void GotoXY(int x, int y)
{
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main() {
#pragma region Vector �����̳�
	/*
	std::vector<int> vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);

	cout << "vector.size: " << vector.size() << endl;
	cout << "cpacity: " << vector.capacity() << endl;

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << endl;
	}

	vector.push_back(40);
	vector.push_back(50);

	vector.pop_back();

	cout << "vector.size: " << vector.size() << endl;
	cout << "cpacity: " << vector.capacity() << endl;

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << endl;
	}
	*/
#pragma endregion

#pragma region ���� ����
	//srand(time(NULL));
	//vector<const char *> note;
	//createCount = 5;
	//int life = 5;
	//int x;
	//int y;
	//
	//const char * arrow[4];	
	//arrow[0] = "��";
	//arrow[1] = "��";
	//arrow[2] = "��";
	//arrow[3] = "��";

	//for (int i = 0; i < createCount; i++) {
	//	int random = rand() % 4;
	//	note.push_back(arrow[random]);
	//}

	//char key = 0;
	//while (!note.empty()) {
	//	for (int i = 0; i < note.size(); i++) {
	//		cout << note[i] << " ";
	//	}
	//	cout << "\n";
	//	key = _getch();

	//	if (key == -32) {
	//		key = _getch();
	//	}

	//	switch (key) {
	//		case UP:
	//			if (note[note.size() - 1] == arrow[0]) {
	//				note.pop_back();
	//			}
	//			break;
	//		case LEFT:
	//			if (note[note.size() - 1] == arrow[1]) {
	//				note.pop_back();
	//			}
	//			break;
	//		case RIGHT:
	//			if (note[note.size() - 1] == arrow[2]) {
	//				note.pop_back();
	//			}
	//			break;
	//		case DOWN:
	//			if (note[note.size() - 1] == arrow[3]) {
	//				note.pop_back();
	//			}
	//			break;
	//	}
	//	// ��ũ���� ����� �Լ�
	//	system("cls");
	//}
#pragma endregion

#pragma region deque �����̳�
	//deque ����
	/*std::deque<int> deque;
	deque.push_back(10);
	deque.push_back(20);
	deque.push_front(99);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << endl;
	}*/
#pragma endregion

	return 0;
}
