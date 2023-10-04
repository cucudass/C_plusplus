#include <iostream>
#include <stack>
#include <queue>
using namespace std;
#pragma region 컨테이너 어댑터
/*
기본 컨테이너의 인터페이스를 제한하여 만든 기능이 제한되거나 변형된 컨테이너
*/
#pragma endregion

int main() {
#pragma region 컨테이너 어댑터(stack)
	//std::stack<int> stack;
	//
	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//stack.push(50);
	//
	//while (!stack.empty()) {
	//	cout << stack.top() << endl;
	//	stack.pop();
	//}
#pragma endregion

#pragma region 컨테이너 어댑터(queue)
	std::queue<int> queue;
	
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);

	while (!queue.empty()) {
		cout << queue.front() << endl;
		queue.pop();
	}
#pragma endregion


	
	return 0;
}
