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
			head->prev = newNode;
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
	void PopFront() {
		Node * deleteNode = head;
		if (size == 0) {
			cout << "List is Empty\n";
			return;
		} else if(size == 1) {
			head = nullptr;
			tail = nullptr;

			delete deleteNode;
		} else {
			head = deleteNode->next;
			head->prev = nullptr;

			delete deleteNode;
		}
		size--;
	}
	void PopBack() {
		Node * deleteNode = tail;
		if (size == 0) {
			cout << "List is Empty\n";
			return;
		} else if (size == 1) {
			head = nullptr;
			tail = nullptr;
			delete deleteNode;
		} else {
			tail = deleteNode->prev;
			tail->next = nullptr;

			delete deleteNode;
		}
		size--;
	}

	void Insert2(int index, T data) {	
		Node * inNode = new Node;
		inNode->data = data;
		if (index > size) {
			cout << "현재 크기보다 큼...";
			return;
		} else {
			if (index <= 0) {
				PushFront(data);
			} else if (index == size) {
				PushBack(data);
			} else {
				Node * search = head;
				for (int i = 0; i < index; i++) {
					search = search->next;
				}

				inNode->prev = search->prev;
				inNode->next = search;

				search->prev->next = inNode;
				search->prev = inNode;

				size++;
			}
		}
	}  // 0번지를 0으로 계산
	void Insert(int position, T data) {
		if (position <= 1) {
			PushFront(data);
			return;
		}

		Node * currentNode = head;
		for (int i = 1; i < position; i++)
		{
			currentNode = currentNode->next;
		}
		Node * newNode = new Node;
		newNode->next = currentNode;

		currentNode->prev->next = newNode;
		newNode->prev = currentNode->prev;

		currentNode->prev = newNode;
	} //0번지를 1로 계산

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
	~DoubleLinkedList() {
		while (size != 0) {
			PopFront();
		}
	}
};