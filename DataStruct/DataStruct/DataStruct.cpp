#include <iostream>
#include "MaxHeap.h"
using namespace std;

int main()
{
	MaxHeap<int> heap;
	heap.Insert(30);
	heap.Insert(20);
	heap.Insert(50);

	heap.Display();
}