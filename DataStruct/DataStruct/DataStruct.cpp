#include <iostream>
#include "HashTable.h"

using namespace std;

int main()
{
	HashTable<string, int> ht;

	ht.Insert("50", 10);
	ht.Insert("50", 20);
	cout << ht.Count("50") << endl;
	ht.Display("50");
}