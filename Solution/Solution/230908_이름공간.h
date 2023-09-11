#include <iostream>
using namespace std;

int data = 25;

namespace A {
	void Attack() {
		cout << "A 개발자의 Attack( )" << endl;
	}
}

namespace B {
	void Attack() {
		cout << "B 개발자의 Attack( )" << endl;
	}
}

void Damage(int hp = 100) {
	hp -= 25;
	cout << "hp의 값 : " << hp << endl;
}

//기본 매개변수는 오른쪽에서 부터 정의해야 한다.
void Move(int x, int y, int z = 10) {
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
#pragma region 범위지정연산자
	//여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연잔자
	//범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때, 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않는다.

	//int data = 100;
	//
	//std::cout << "전역변수 exp의 값 : " << data << std::endl;
	//std::cout << "지역변수 exp의 값 : " << ::data << std::endl;
#pragma endregion

#pragma region namespace(이름 공간)
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.
	//A::Attack();
	//B::Attack();
#pragma endregion

#pragma region 기본 매개변수
	////함수의 매개 변수에 값이 전달되지 않았을 때, 기본 값으로 설정되는 매개 변수
	//int hp = 100;
	//Damage();
	//Move(5, 10);
	////기본 매개변수가 있는 위치에 다시 새로운 인수를 넣을 수 있다.
	//Move(5, 10, 2);
#pragma endregion

#pragma region 최소 공배수
	int x = 0;
	int y = 0;
	int z = 0;
	cin >> x >> y;
	int a, b = 0;
	if (x > y) {
		a = x;
		b = y;
	}
	else {
		a = y;
		b = x;
	}

	cout << (x*y) / gcd(a, b);

#pragma endregion

	return 0;
}
