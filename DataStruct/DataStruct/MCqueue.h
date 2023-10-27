#pragma once
#include <iostream>
using namespace std;

#define SIZE 4
#pragma region 원형 큐
/*물리적으로는 선형 구조를 가지고 있으며, 큐의 시작점과 끝점을 연결한 큐*/
#pragma endregion
template<typename T>
class MCqueue {
private:
	int front;
	int rear;
	T arr[SIZE];
	int size;
public:
	MCqueue() {
		front = SIZE - 1;
		rear = SIZE - 1;
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = NULL;
		}
		size = 0;
	}
	void EnQueue(T data) {
		if (!isFull()) {
			rear = (rear + 1) % SIZE;
			arr[rear] = data;
			size++;
		} else {
			cout << "Queue is Full\n";
		}
	}
	void Dequeue() {
		if (!Empty()) {
			front = (front + 1) % SIZE;
			arr[front] = NULL;
			size--;
		} else {
			cout << "Queue is Empty\n";
		}
	}
	T & Front() {
		return arr[(front+1) % SIZE];
	}
	T & Back() {
		return arr[rear];
	}
	int & Size() {
		return size;
	}
	bool isFull() {
		cout << boolalpha;
		return (rear + 1) % SIZE == front ? true : false;
	}
	bool Empty() {
		cout << boolalpha;
		return rear == front ? true : false;
	}
	void Display() {
		for (int i = 1; i <= SIZE-1; i++)
		{
			int index = (front + i) % SIZE;
			if (arr[index] == NULL)
				break;
			cout << arr[index] << " ";
		}
	}
	~MCqueue() {}
};