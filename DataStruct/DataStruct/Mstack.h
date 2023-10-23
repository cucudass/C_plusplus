#pragma once
#include <iostream>
using namespace std;

#define SIZE 5

template<typename T>
class Mstack {
private:
	int top;
	int size;
	T arr[SIZE];
public:
	Mstack() {
		top = -1;
		size = 0;
	}
	void push(T data) {
		if (!IsFull()) {
			arr[++top] = data;
			size++;
		} else {
			cout << "Stack OverFlow\n";
		}
	}
	void Pop() {
		if (Empty()) {
			cout << "Stack is Empty\n";
		} else {
			top--;
			size--;
		}
	}
	T & Top() {
		return arr[top];
	}
	int & Size() {
		return size;
	}
	bool Empty() {
		cout << boolalpha;
		return top <= -1 ? true : false;
	}
	bool IsFull() {
		cout << boolalpha;
		return top >= 4 ? true : false;
	}
	~Mstack() {

	}
};