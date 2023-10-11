#pragma once
#include <iostream>
#include <iterator>
using namespace std;
class SingleLinkedList
{
private:
	struct Node
	{
		int data;
		struct Node * next;
	};
	Node * head;
	Node * tail;
	int size = 0;

public:
	SingleLinkedList();
	void PushFront(int data);
	void PushBack(int data);
	int Size();
	void Show();
};

