#pragma once
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < (n - i) - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

#pragma region ������ �����ε�
class Vector2 {
private:
	int x;
	int y;
public:
	Vector2(int x, int y) {
		this->x = x;
		this->y = y;
	}

	Vector2 operator+(const Vector2 & vector2) {
		Vector2 clone(x + vector2.x, y + vector2.y);

		return clone;
	}
	Vector2 operator-(const Vector2 & vector2) {
		Vector2 clone(x - vector2.x, y - vector2.y);

		return clone;
	}
	Vector2 operator*(const Vector2 & vector2) {
		Vector2 clone(x * vector2.x, y * vector2.y);

		return clone;
	}
	Vector2 operator/(const Vector2 & vector2) {
		Vector2 clone(x / vector2.x, y / vector2.y);

		return clone;
	}
	Vector2 operator++() {
		this->x++;
		this->y++;

		return *this;
	}
	Vector2 operator++(int) {
		Vector2 clone = *this;
		this->x++;
		this->y++;

		return clone;
	}
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
};
#pragma endregion

int main()
{
#pragma region ��ǰ ����
	/*
	���� ������ �� ���Ҹ� �˻��Ͽ� �����ϴ� �˰���
	�ð� ���⵵ O(n^2)
	*/
	int arr[] = { 4,5,6,8,2 };
	int n = sizeof(arr) / sizeof(int);

	bubbleSort(arr, n);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
#pragma endregion

#pragma region ������ �����ε�
	Vector2 Up(0, 1);
	Vector2 Right(1, 0);

	Vector2 temp = Up + Right;
	cout << temp.GetX() << endl;
	cout << temp.GetY() << endl;

	Vector2 a = temp++;
	cout << a.GetX() << endl;
	cout << a.GetY() << endl;

	++temp;
	cout << temp.GetX() << endl;
	cout << temp.GetY() << endl;

#pragma endregion
}


