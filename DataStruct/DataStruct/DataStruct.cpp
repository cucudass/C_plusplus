#include <iostream>
#include "MCqueue.h"

using namespace std;

int main()
{
#pragma region 원형 큐
	/*물리적으로는 선형 구조를 가지고 있으며, 큐의 시작점과 끝점을 연결한 큐*/

	MCqueue<int> cq;
	cq.EnQueue(10);
	cq.EnQueue(20);
	cq.EnQueue(30);

	cq.Dequeue();

	cq.EnQueue(40);
	cq.Dequeue();
	cout << cq.Front() << endl;
	cout << cq.Back() << endl;
	cout << cq.Size() << endl;
	cq.Display();
#pragma endregion

}