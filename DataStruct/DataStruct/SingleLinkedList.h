#pragma once
#include <iostream>
#include <iterator>
using namespace std;

template<typename T>
/*템플릿으로 선언하면 헤더에 같이 구현하는것이 좋다...*/
class SingleLinkedList
{
private:
	struct Node
	{
		T data;
		struct Node * next;
	};
	Node * head = nullptr;
	Node * tail = nullptr;
	int size = 0;

public:
	SingleLinkedList();
	void PushFront(T data);
	void PushBack(T data);
	void PopFront();
	void PopBack();
	int Size();
	void Display();
	~SingleLinkedList();
};

template<typename T>
SingleLinkedList<T>::SingleLinkedList()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<typename T>
void SingleLinkedList<T>::PushFront(T data)
{
	Node * newNode = new Node;
	newNode->data = data;
	if (head == nullptr && tail == nullptr) {
		newNode->next = nullptr;

		head = newNode;
		tail = newNode;
	} else {
		newNode->next = head;
		head = newNode;
	}
	size++;
}

template<typename T>
void SingleLinkedList<T>::PushBack(T data)
{
	Node * newNode = new Node;
	Node * currentPtr = head;
	newNode->data = data;
	newNode->next = nullptr;
	if (head == nullptr && tail == nullptr) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
	size++;
}

template<typename T>
inline void SingleLinkedList<T>::PopFront()
{
	if (head == nullptr && tail == nullptr) {
		cout << "List is Empty" << endl;
		return;
	} 
	
	if (size == 1) {
		Node * delNode = head;

		head = nullptr;
		tail = nullptr;
		free(delNode);
	} else {
		Node * delNode = head;

		head = delNode->next;
		free(delNode);
	}
	size--;
}

template<typename T>
inline void SingleLinkedList<T>::PopBack()
{
}

template<typename T>
int SingleLinkedList<T>::Size()
{
	return size;
}

template<typename T>
void SingleLinkedList<T>::Display()
{
	if (size == 0) {
		cout << "List is Empty\n";
		return;
	} else {
		Node * currentPtr = head;
		while (currentPtr != nullptr) {
			cout << currentPtr->data << " ";
			currentPtr = currentPtr->next;
		}
	}
}

template<typename T>
inline SingleLinkedList<T>::~SingleLinkedList()
{
	Node * delNode = head;
	while (size != 0){ 
		PopFront();
	}
}
