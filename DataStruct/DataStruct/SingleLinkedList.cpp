#include "SingleLinkedList.h"
SingleLinkedList::SingleLinkedList()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}
void SingleLinkedList::PushFront(int data)
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
}

void SingleLinkedList::PushBack(int data)
{
	Node * newNode = new Node;
	newNode->data = data;
	if (head == nullptr && tail == nullptr) {
		newNode->next = nullptr;

		head = newNode;
		tail = newNode;
	} else {
		newNode->next = tail;
		tail = newNode;
	}
}

int SingleLinkedList::Size()
{
	Node * sizeNode = head->next;
	while(sizeNode != nullptr) {
		size++;
	}
	return size;
}

void SingleLinkedList::Show()
{
	Node * currentPtr = head->next;
	while (currentPtr != nullptr) {
		cout << currentPtr->data << " ";
		currentPtr = currentPtr->next;
	}
}
