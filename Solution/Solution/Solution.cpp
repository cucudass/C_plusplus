#include <iostream>
#include "Vulture.h"
#include "Tank.h"
#include "Goliath.h"
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

	//Mechanic* mechanic1 = new Vulture;
	//
	//cout << "Mechacnic의 크기: " << sizeof(Mechanic) << endl;
	
	/*
	가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때 객체 주소에 가상 함수 테이블을 추가한다.
	*/

	//mechanic1->Move();
	//mechanic1->Attack();

#pragma endregion

#pragma region StarCraft_Unit_Create

	//int selectNumber = 0;
	//Mechanic* mechanic;
	//for (int i = 0; i < 5; i++) {
	//	cin >> selectNumber;
	//
	//	switch (selectNumber)
	//	{
	//		case 1:
	//			mechanic = new Vulture;
	//			break;
	//		case 2:
	//			mechanic = new Tank;
	//			break;
	//		case 3:
	//			mechanic = new Goliath;
	//			break;
	//		default:
	//			cout << "..." << endl;
	//			i--;
	//			continue;
	//	}
	//	mechanic->Create();
	//	mechanic->Attack();
	//}

	/*
	가상 함수의 경우 가상 함수 테이블을 사용하여 호출되는 함수를 실행 시간에 결정하며,
	정적으로 선언된 함수는 가상 함수로 선언할 수 없습니다.
	*/
#pragma endregion

#pragma region 가상 소멸자
	/*
	객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이 모두 호출되는 소멸자.
	*/
	Mechanic* unit1 = new Vulture;
	Mechanic* unit2 = new Tank;
	Mechanic* unit3 = new Goliath;

	delete unit1;
	delete unit2;
	delete unit3;

	/*
	가상 소멸자는 상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저 실행되고 상위 클래스의 소멸자가 실행되어야 하기 때문에
	실행 시간에 메모리에 할당된 객체를 먼저 확인하고 차례대로 소멸시켜야 한다.
	*/
#pragma endregion

	return 0;
}
