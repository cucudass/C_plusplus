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
			if(parent>1)
				SwapHeap(parent, parent/2);
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
			if (index > 1) {
				SwapHeap(index, (index / 2));
			}
			//int child = index;
			//int parent = index / 2;
			//
			//while (child > 1) {
			//	//자식 노드와 부모 노드의 데이터를 비교
			//	if (arr[parent] < arr[child]) {
			//		swap(arr[parent], arr[child]);
			//	}
			//	child = parent;
			//	parent = child / 2;
			//}
		}
	}
	
	bool IsFull() {
		cout << boolalpha;
		return (index == SIZE - 1) ? true : false;
	}

	void Display() {
		for (int i = 1; i < SIZE; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};