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

#pragma region 연산자 오버로딩
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
#pragma region 거품 정렬
	/*
	서로 인접한 두 원소를 검사하여 정렬하는 알고리즘
	시간 복잡도 O(n^2)
	*/
	int arr[] = { 4,5,6,8,2 };
	int n = sizeof(arr) / sizeof(int);

	bubbleSort(arr, n);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
#pragma endregion

#pragma region 연산자 오버로딩
	Vector2 Up(0, 1);
	Vector2 Right(1, 0);

	Vector2 temp = Up + Right;

	cout << temp.GetX() << endl;
	cout << temp.GetY() << endl;
#pragma endregion

	
}


