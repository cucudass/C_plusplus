#include <iostream>
#include "Vulture.h"
using namespace std;

#pragma region 다형성
	/*
	여러 개의 서로 다른 객체가 서로 다른 방법으로 처리할 수 있는 작업이다.
	다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고,
	실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 한다.
	*/

#pragma endregion

int main() {

#pragma region 오버라이드
	//Mechanic mechanic;
	//mechanic.Move();
	//
	//Vulture vulture;
	//vulture.Move();
#pragma endregion

#pragma region 가상함수
	/*
	상속되는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수
	가상 함수 실행 시간에 상위 클래스에 대한 참조로 하위 클래스에 재정의된 함수를 호출할 수 있으며,
	접근 지정자는 공개로 설정해야 한다.
	*/	

	Mechanic* mechanic1 = new Vulture;

	cout << "Mechacnic의 크기: " << sizeof(Mechanic) << endl;

	mechanic1->Move();
	mechanic1->Attack();

#pragma endregion

	

	return 0;
}
