#pragma once
#include <iostream>
#include <iterator>
using namespace std;

template<typename T>
class CircularLinkedList {
private:
	struct Node
	{
		T data;
		struct Node * next;
	};
	Node * head;;
	int size;

public:
	CircularLinkedList() {
		head = nullptr;
		size = 0;
	}
	void PushFront(T data) {
		Node * newNode = new Node;
		newNode->data = data;
		if (head == nullptr) {
			head = newNode;
			newNode->next = newNode;
		} else {
			newNode->next = head->next;
			head->next = newNode;
		}
		size++;
	}
	void PushBack(T data) {
		Node * newNode = new Node;
		newNode->data = data;
		if (head == nullptr) {
			head = newNode;
			newNode->next = newNode;
		} else {
			newNode->next = head->next;
			head->next = newNode;
			head = newNode;
		}
		size++;
	}
	void PopBack() {
		//head 변경
		Node * delNode = head;

		if (size == 0) {
			cout << "List is Empty\n";
			return;
		} else if (size == 1) {
			head == nullptr;
			delete delNode;
		} else {
			Node * CurNode = head;
			for (int i = 0; i < size - 1; i++) {
				CurNode = CurNode->next;
			}
			CurNode->next = head->next;
			head = CurNode;
			delete delNode;
		}
		size--;
	}
	void PopFront() {
		//head 변경 X
		
		if (size == 0) {
			cout << "List is Empty\n";
			return;
		} else if (size == 1) {
			Node * delNode = head;

			head == nullptr;
			delete delNode;
		} else {
			Node * delNode = head->next;

			head->next = delNode->next;
			delete delNode;
		}
		size--;
	}
	void Display() {
		Node * currentPtr = head;
		for (int i = 0; i < size; i++) {
			cout << currentPtr->data << " ";
			currentPtr = currentPtr->next;
		}
	};
	int Size() {
		return size;
	}
	~CircularLinkedList() {
		while (size) {
			PopBack();
		}
	};
};