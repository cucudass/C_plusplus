#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

//void InsertSort(int arr[], int n) {
//	int key = 0;
//	int j = 0;
//	for (int i = 1; i < n; i++)	{
//		key = arr[i];
//		for (j = (i - 1); j >=0 && arr[j] > key; j--) {
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = key;
//	}
//}

int main()
{
#pragma region ��������
	/*
	�� ��° �ڷ���� �����Ͽ� �� ��(������) �ڷ��� ���Ͽ� ������ ��ġ�� ������ ��,
	�ڷḦ �ڷ� �ű�� ������ �ڸ��� �ڷḦ �����Ͽ� �����ϴ� �˰���
	*/

	/*
	int insertBuffer[] = { 9,1,5,2,3 };
	int n = sizeof(insertBuffer) / sizeof(int);

	InsertSort(insertBuffer, n);
	for (const int & element : insertBuffer)
		cout << element << " ";
	cout << endl;
	*/
#pragma endregion

#pragma region ����ó��
	/*
	int value = 0;
	try {
		cin >> value;

		int result = 10 / value;

	} catch (exception& e) {
		cout << e.what() << endl;
	}
	*/
#pragma endregion

#pragma region �ð����⵵
	/*
	��ǻ�� ���α׷��� �Է� ���� ���� ���� �ð��� ������踦 ��Ÿ���� ô��
	*/

	// Big-O ǥ���
	/*
		�Է°��� ��ȭ�� ���� ������ ������ ��,
		���� Ƚ���� ���� �ð��� �󸶸�ŭ �ɸ��� �� ��Ÿ���� ô��

		�־��� ��츦 ����ϹǷ�, ���α׷��� ����Ǵ� �������� �ҿ�Ǵ� �־��� �ð����� ����� �� �ֱ� ����

		O(1) ��� �ð� ���⵵
		- �Է°��� �����ϴ��� �ð��� �þ�� �ʴ� �ð�
		Ex) �迭�� �ε��� ����

		O(n) ���� �ð� ���⵵
		- �Է°��� �����Կ� ���� �ð� �Ǵ� ���� ������ �����ϴ� �ð� ���⵵
		�Է� 1
		�ð� ->1 ��
		�Է� 100
		�ð� ->100 ��
		Ex) for��

		O(log n) �α� �ð� ���⵵
		- �Է� �������� ũ�Ⱑ Ŀ������ ó�� �ð��� �α�(log)��ŭ ª������ �ð� ���⵵
	*/
#pragma endregion

}


