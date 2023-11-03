#pragma once
#include <iostream>
using namespace std;
#define SIZE 10
template<typename T>
class MaxHeap {
private:
	int index;
	T arr[SIZE];
	void SwapHeap(int child, int parent) {
		if (arr[child] > arr[parent]) {
			swap(arr[parent], arr[child]);

			if(parent > 1)
				SwapHeap(parent, parent/2);
		}
	}
	void CheckChild(int parent) {
		if (parent <= index) {
			int child = parent * 2;

			if (arr[child] < arr[child + 1]) {
				child++;
			}
			ChangeUD(parent, child);
			CheckChild(child);
		}
	}
	void ChangeUD(int parent, int child) {
		if (arr[parent] < arr[child]) {
			swap(arr[parent], arr[child]);
		}
	}
public:
	MaxHeap() {
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = NULL;
		}
		index = 0;
	}
	void Insert(T data) {
		if (IsFull()) {
			cout << "MaxHeap is Full\n";
			return;
		} else {
			arr[++index] = data;
			//0������ ��� �ϸ� �ȵǱ⿡ 2���� �̻��� ������ �� swap ������ Ȯ��...
			if (index > 1)
				SwapHeap(index, (index / 2));
			//int child = index;
			//int parent = index / 2;
			//
			//while (child > 1) {
			//	//�ڽ� ���� �θ� ����� �����͸� ��
			//	if (arr[parent] < arr[child]) {
			//		swap(arr[parent], arr[child]);
			//	}
			//	child = parent;
			//	parent = child / 2;
			//}
		}
	}
	T & DeleteRe() {
		if (index <= 0) {
			cout << "Heap is Empty\n";
			exit(1);
		}
		//�ӽ� ���� <- ���� ū ���� �����ϴ� ����
		T result = arr[1];
		//�ּڰ��� root�� �־��ش�.
		arr[1] = arr[index];
		//index�� ����Ű�� ���� �ʱ�ȭ
		arr[index] = NULL;
		index--;
		int parent = 1;
		while (parent * 2 <= index) {
			int child = parent * 2;
			//�������� Ŭ ��
			if (arr[child] < arr[child + 1]) {
				child++;
			}
			//�θ� ����� Key ���� �ڽ� ����� Key ������ ũ�� �ݺ��� ����
			if (arr[child] < arr[parent])
				break;
			
			swap(arr[parent], arr[child]);
			parent = child;
		}
		return result;
	}
	void Delete() {
		if (IsEmpty()) {
			cout << "MaxHeap is Empty\n";
			return;
		} else {
			T temp = arr[1];
			arr[1] = arr[index];
			arr[index--] = NULL;
			
			//index ũ�⸦ 1�� ���� ��, root�� �ڽĵ��� ��...
			CheckChild(1);
		}
	}
	bool IsFull() {
		cout << boolalpha;
		return (index == SIZE - 1) ? true : false;
	}
	bool IsEmpty() {
		cout << boolalpha;
		return (index == 0) ? true : false;
	}
	void Display() {
		for (int i = 1; i < SIZE; i++)
		{
			cout << arr[i] << " ";
		}
		//for (const T & element : arr) {
		//	cout << element << " "
		//}
		cout << endl;
	}
};