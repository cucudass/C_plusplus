#pragma once
#include <iostream>
using namespace std;

#pragma region 선형 큐
/*
배열의 공간에 들어간 데이터가 고정되어 데이터를 빼내더라도 초기화하지 않으며,
원래 데이터가 있던 배열의 자리에 더 이상 다른 값이 들어갈 수 없는 Queue
*/
#pragma endregion


#define SIZE 5
template<typename T>

class Mlqueue{
private:
	int front;
	int rear;
	int size;
	T arr[SIZE];

public:
	Mlqueue() {
		front = 0;
		rear = 0;
		size = 0;
	}
	void Enqueue(T data) {
		if (!isFull()) {
			arr[rear++] = data;
			size++;
		} else {
			cout << "Queue is Full\n";
		}
	}
	void Dequeue() {
		if (!Empty()) {
			arr[front++] = 0;
			size--;
		} else {
			cout << "Queue is Empty\n";
		}
	}
	T & Front() {
		if (Empty()) {
			exit(1);
		} else {
			return arr[front];
		}
	}
	T & Back() {
		if (Empty()) {
			exit(1);
		} else {
			return arr[rear - 1];
		}
	}
	int & Size() {
		return size;
	}
	bool isFull() {
		cout << boolalpha;
		return SIZE <= rear ? true : false;
	}
	bool Empty() {
		cout << boolalpha;
		return front == rear ? true : false;
	}
};