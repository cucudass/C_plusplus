#pragma once
#include <iostream>

using namespace std;
#define SIZE 5
void CountSort(int arr[], int n) {
	int buffer[SIZE] = { 0 };
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		int index = arr[i] - 1;
		buffer[index] += cnt;
	}
	int k = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < buffer[i]; j++) {
			arr[k] = (i + 1);
			k++;
		}
	}
}

int main()
{
#pragma region 계수 정렬
	/*
	데이터의 값을 직접 비교하지 않고, 단순하게 각 숫자가 몇 개 있는지
	갯수를 세어 저장한 다음 정렬하는 알고리즘
	시간복잡도 -> O(n + k)
	*/
#pragma endregion
	int arr[10] = { 1,5,3,4,5,2,3,1,1,4 };
	int n = sizeof(arr) / sizeof(int);
	CountSort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}