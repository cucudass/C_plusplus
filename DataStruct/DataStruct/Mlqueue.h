#pragma once
#include <iostream>
using namespace std;

#pragma region ���� ť
/*
�迭�� ������ �� �����Ͱ� �����Ǿ� �����͸� �������� �ʱ�ȭ���� ������,
���� �����Ͱ� �ִ� �迭�� �ڸ��� �� �̻� �ٸ� ���� �� �� ���� Queue
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