#pragma once
#include <iostream>
using namespace std;

#define SIZE 5
template<typename T>
class MVector {
private:
	int size;
	int capacity;
	T * bufferptr;
	
public:
	MVector() { 
		size = 0;
		capacity = 0;
		bufferptr = nullptr;
	}
	void Pushback(T data) {
		if (capacity == 0) {
			Resize(1);
		} else if (size >= capacity) {
			Resize(capacity * 2);
		}
		bufferptr[size++] = data;
	}
	void Popback() {
		if (size <= 0) {
			cout << "Vector is Empty\n";
		} else {
			bufferptr[--size] = NULL;
		}
	}
	void Resize(int newSize) {
		//1.capacity에 새로운 size값을 설정.
		capacity = newSize;
		T * buffer = new T[capacity];

		for (int i = 0; i < capacity; i++) {
			buffer[i] = NULL;
		}
		for (int i = 0; i < size; i++)
		{
			buffer[i] = bufferptr[i];
		}
		if (bufferptr != nullptr) {
			delete[] bufferptr; //배열 크기만큼 메모리 해제
		}
		bufferptr = buffer;
	}
	void Reserve(int newSize) {
		if (newSize < capacity) {
			return;
		}
		Resize(newSize);
	}
	T & operator[](const int & value) {
		return bufferptr[value];
	}
	int & Size() {
		return size;
	}
	int & Capacity() {
		return capacity;
	}
	T * Begin() {
		return bufferptr;
	}
	T * End() {
		return bufferptr + size;
	}

	~MVector() {
		delete[] bufferptr;
	}
};