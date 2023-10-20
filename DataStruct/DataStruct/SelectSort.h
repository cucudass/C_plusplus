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
#pragma region ��������
	/*
	���ĵ��� ���� �����͵鿡 ���� ���� ���� �����͸� ã�Ƽ� ���� �տ� �ִ� �����Ϳ� ��ȯ�ϴ� �˰���
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


