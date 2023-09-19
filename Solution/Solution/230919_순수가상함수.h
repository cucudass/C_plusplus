#pragma once
#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"

using namespace std;

#pragma region 함수의 오버로딩
//같은 이름의 함수를 매개 변수의 자료형과 매개변수의 수로 구분하여 여러 개으를 선언할 수 있는 기능
void Calculator(char x, char y) {
	cout << "x + y : " << x + y << endl;
}

void Calculator(int x, int y) {
	cout << "x + y : " << x + y << endl;
}

void Calculator(float x, float y) {
	cout << "x + y : " << x + y << endl;
}

/*
함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의 형태를 보고 호출함으로,
반환형으로 함수의 오버로딩은 생성할 수 없다.
*/
//int Calculator(float x, float y) {
//
//}
#pragma endregion

void Recovery(Unit * unit) {
	//unit->SetMaxHP(unit->GetMaxHP());
	unit->RecoveryHP();
}
int main() {
#pragma region 함수의 오버로딩
	//Calculator('A', 'B');
	//Calculator(10, 20);
	//Calculator(5.75f, 6.25f);
#pragma endregion
#pragma region 순수 가상 함수
	//함수를 선언만 할 수 있으며, 해당 클래스에서 구현으르 할 수 없고 상속받은 하위 클래스에서 반드시 재정의를 해야하는 멤버함수

	int selectunit = 0;
	Unit * unit;
	cout << "1: Marine, 2: Fierbet, 3: Ghost" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> selectunit;
		switch (selectunit) {
		case 1:
			unit = new Marine;
			break;
		case 2:
			unit = new Firebet;
			break;
		case 3:
			unit = new Ghost;
			break;
		default:
			cout << "1에서 3사이의 수를 입력하세요..." << endl;
			i--;
			continue;
		}

		unit->SetHP(unit->GetMaxHP() / 2);
		cout << "현재 유닛의 체력: " << unit->GetHP() << endl;
		cout << "비콘 이동..." << endl;
		Recovery(unit);
		cout << "현재 유닛의 현재 체력: " << unit->GetHP() << endl;
	}

	//marine->SetHP(marine->GetMaxHP()/2);
	//cout << "Marine의 현재 체력: " << marine->GetHP() << endl;
	//cout << "비콘 이동..." << endl;
	//Recovery(marine);
	//cout << "Marine의 현재 체력: " << marine->GetHP() << endl;

#pragma endregion
	return 0;
}

