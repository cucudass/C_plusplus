#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"
#include <string>
using namespace std;

int main()
{
	DoubleLinkedList<int> dlist;

	dlist.PushBack(10);
	dlist.PushBack(20);
	dlist.PushBack(30);
	dlist.PushFront(5);
	dlist.PushFront(4);
	dlist.PushFront(3);
	dlist.PushFront(2);
	dlist.PushFront(1);

	cout << "dlist의 Size: " << dlist.Size() << endl;
	cout << "dlist: ";
	dlist.Display();

	dlist.PopFront();
	dlist.PopBack();

	cout << "\ndlist의 Size: " << dlist.Size() << endl;
	cout << "dlist: ";
	dlist.Display();
	cout << "\n";
	dlist.Insert(1, 10);
	cout << "\n";
	cout << "dlist의 Size: " << dlist.Size() << endl;
	cout << "dlist: ";
	dlist.Display();
}
