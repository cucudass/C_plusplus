#pragma once
#include <iostream>
using namespace std;

template<typename T>
class DoubleLinkedList {
private:
	struct Node {
		T data;
		struct Node * prev;
		struct Node * next;
	};

	Node * head;
	Node * tail;
	int size;

public:
	DoubleLinkedList() {
		head = nullptr;
		tail = nullptr;
		size = 0;
	}
	void PushFront(T data) {
		Node * newNode = new Node;
		newNode->data = data;
		if (head == nullptr && tail == nullptr) {
			newNode->next = nullptr;
			newNode->prev = nullptr;

			head = newNode;
			tail = newNode;
		} else {
			newNode->next = head;
			newNode->prev = nullptr;
			head = newNode;
		}
		size++;
	};
	void PushBack(T data) {
		Node * newNode = new Node;
		newNode->data = data;
		newNode->next = nullptr;
		if (head == nullptr && tail == nullptr) {
			newNode->prev = nullptr;

			head = newNode;
			tail = newNode;
		} else {
			newNode->prev = tail;
			tail->next = newNode;
			tail = newNode;
		}
		size++;
	};
	int Size() {
		return size;
	}
	void Display() {
		Node * currentPtr = head;
		while (currentPtr != nullptr) {
			cout << currentPtr->data << " ";
			currentPtr = currentPtr->next;
		}
	};
};
