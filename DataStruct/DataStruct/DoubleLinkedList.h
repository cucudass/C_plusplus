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
			newNode->next = head->next;
			newNode->prev = nullptr;
			head = newNode;
		}
		size++;
	}
	void PushBack(T data) {
		Node * newNode = new Node;
		newNode->data = data;
		if (head == nullptr && tail == nullptr) {
			newNode->next = nullptr;
			newNode->prev = nullptr;

			head = newNode;
			tail = newNode;
		} else {
			newNode->next = nullptr;
			newNode->prev = tail->next;
			tail = newNode;
		}
		size++;
	}
	int size() {
		return size;
	}
	void Display() {

	}
};
