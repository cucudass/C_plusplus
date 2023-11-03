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
			//0번지는 계산 하면 안되기에 2번지 이상이 존재할 때 swap 조건을 확인...
			if (index > 1)
				SwapHeap(index, (index / 2));
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
	T & DeleteRe() {
		if (index <= 0) {
			cout << "Heap is Empty\n";
			exit(1);
		}
		//임시 변수 <- 가장 큰 값을 보관하는 역할
		T result = arr[1];
		//최솟값을 root에 넣어준다.
		arr[1] = arr[index];
		//index로 가리키는 값을 초기화
		arr[index] = NULL;
		index--;
		int parent = 1;
		while (parent * 2 <= index) {
			int child = parent * 2;
			//오른쪽이 클 때
			if (arr[child] < arr[child + 1]) {
				child++;
			}
			//부모 노드의 Key 값이 자식 노드의 Key 값보다 크면 반복을 종료
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
			
			//index 크기를 1개 줄인 뒤, root와 자식들을 비교...
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