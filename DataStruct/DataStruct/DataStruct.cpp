#include <iostream>
#include "MVector.h"
using namespace std;

int main()
{
	MVector<int> mv;
	mv.Pushback(10);
	mv.Popback();
	mv.Popback();

}