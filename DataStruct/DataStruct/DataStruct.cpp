#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"
#include "CircularLinkedList.h"
#include <string>
using namespace std;

int main()
{
	CircularLinkedList<int> clist;

	clist.PushBack(10);
	clist.PushBack(20);
	clist.PushBack(30);
	clist.PushBack(40);

	clist.PushFront(5);
	clist.PushFront(4);
	clist.PushFront(3);
	clist.Display();
	
	cout << "\n";
	cout << "PopBack\n";
	clist.PopBack();
	clist.Display();

	cout << "\n";
	cout << "PopFront\n";
	clist.PopFront();
	clist.Display();
}
