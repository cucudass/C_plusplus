#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"
#include <string>
using namespace std;

int main()
{
	DoubleLinkedList<int> dlist;

	dlist.PushBack(10);
	dlist.PushBack(20);
	dlist.PushFront(5);

	cout << "dlist의 Size: " << dlist.Size() << endl;
	cout << "dlist: ";
	dlist.Display();
}
