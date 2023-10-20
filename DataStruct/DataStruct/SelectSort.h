#pragma once
#include <iostream>
using namespace std;

void Selectsort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int min = arr[i];
		int select = i;
		for (int j = (i + 1); j < n; j++) {
			if (min > arr[j]) {
				min = arr[j];
				select = j;
			}
		}
		swap(arr[i], arr[select]);
	}
}

int main()
{
#pragma region 선택정렬
	/*
	정렬되지 않은 데이터들에 대해 가장 작은 데이터를 찾아서 가장 앞에 있는 데이터와 교환하는 알고리즘
	*/

	int arr[] = { 6,2,8,1,0 };
	int n = sizeof(arr) / sizeof(int);

	Selectsort(arr, n);

	for (int & element : arr) {
		cout << element << " ";
	}
	cout << endl;
#pragma endregion

}


