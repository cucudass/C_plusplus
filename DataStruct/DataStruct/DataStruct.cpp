#include <iostream>
#include "HashTable.h"

using namespace std;

int main()
{
	HashTable<int, int> ht;
	ht.Insert(10, 1);
	ht.Insert(20, 2);
	ht.Insert(30, 3);
	cout << ht.Count(30) << endl;
	ht.Display();
	ht.Remove(20);
	cout << endl;
	cout << ht.Count(30) << endl;
	ht.Display();
}