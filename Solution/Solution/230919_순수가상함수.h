#pragma once
#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"

using namespace std;

#pragma region �Լ��� �����ε�
//���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű������� ���� �����Ͽ� ���� ������ ������ �� �ִ� ���
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
�Լ��� �����ε��� ��� �Լ��� �Ű� ������ �����ϴ� �μ��� ���¸� ���� ȣ��������,
��ȯ������ �Լ��� �����ε��� ������ �� ����.
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
#pragma region �Լ��� �����ε�
	//Calculator('A', 'B');
	//Calculator(10, 20);
	//Calculator(5.75f, 6.25f);
#pragma endregion
#pragma region ���� ���� �Լ�
	//�Լ��� ���� �� �� ������, �ش� Ŭ�������� �������� �� �� ���� ��ӹ��� ���� Ŭ�������� �ݵ�� �����Ǹ� �ؾ��ϴ� ����Լ�

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
			cout << "1���� 3������ ���� �Է��ϼ���..." << endl;
			i--;
			continue;
		}

		unit->SetHP(unit->GetMaxHP() / 2);
		cout << "���� ������ ü��: " << unit->GetHP() << endl;
		cout << "���� �̵�..." << endl;
		Recovery(unit);
		cout << "���� ������ ���� ü��: " << unit->GetHP() << endl;
	}

	//marine->SetHP(marine->GetMaxHP()/2);
	//cout << "Marine�� ���� ü��: " << marine->GetHP() << endl;
	//cout << "���� �̵�..." << endl;
	//Recovery(marine);
	//cout << "Marine�� ���� ü��: " << marine->GetHP() << endl;

#pragma endregion
	return 0;
}

