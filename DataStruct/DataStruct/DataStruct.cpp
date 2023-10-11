#include <iostream>
#include "SingleLinkedList.h"
using namespace std;

#pragma region 단일 연결 리스트
//1. 단일 연결 리스트 노드 제작

struct Node
{
	int data;
	struct Node * next;
};
#pragma endregion
/*
void Display_node(Node * root) {
	Node * currentPtr = root->next;
	while (currentPtr != nullptr) {
		cout << currentPtr->data << " ";
		currentPtr = currentPtr->next;
	}
}

void PushFront(Node * target, int data) {
	Node * newnode = new Node;

	newnode->data = data;
	newnode->next = target->next;
	target->next = newnode;
}

void Remove(Node * target) {
	Node * deleteNode = target->next;
	
	target->next = deleteNode->next;
	free(deleteNode); //delete deleteNode;
}
*/
int main()
{
	SingleLinkedList SingleLinkedList;

	SingleLinkedList.PushFront(10);
	SingleLinkedList.PushFront(20);
	SingleLinkedList.PushBack(20);

	cout << "size: " << SingleLinkedList.Size();
	SingleLinkedList.Show();

	/*
	Node * head = new Node;//(Node*)malloc(sizeof(Node)); //new Node도 가능...

	head->data = NULL;
	head->next = nullptr;

	PushFront(head, 10);
	PushFront(head, 20);
	PushFront(head, 30);

	#pragma region for문으로 출력한 것.
	//Node * currentPtr = head;
	//for (int i = 0; ; i++) {
	//	if (currentPtr->next == nullptr) {
	//		break;
	//	} else {
	//		cout << currentPtr->next->data << " ";
	//		currentPtr = currentPtr->next;
	//	}
	//}
	#pragma endregion

	cout << "PushFront" << "\n";
	Display_node(head);
	Remove(head);
	cout << "\n\n" << "Remove" << "\n";
	Display_node(head);

	#pragma region for문으로 출력한 것.
	//Node * currentPtr = head->next;
	//while (currentPtr != nullptr) {
	//	cout << currentPtr->data << " ";
	//	currentPtr = currentPtr->next;
	//}
	#pragma endregion
	*/
}
