#pragma once
#include <iostream>
#include "Vulture.h"
#include "Tank.h"
#include "Goliath.h"
using namespace std;

#pragma region ������
/*
���� ���� ���� �ٸ� ��ü�� ���� �ٸ� ������� ó���� �� �ִ� �۾��̴�.
�������� ������ ������ �Լ��� �Ӽ��� �����Ǵ� ���� ���ε��� ���� �ʰ�,
���� �ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �Ѵ�.
*/

#pragma endregion

int main() {

#pragma region �������̵�
	//Mechanic mechanic;
	//mechanic.Move();
	//
	//Vulture vulture;
	//vulture.Move();
#pragma endregion

#pragma region �����Լ�
	/*
	��ӵǴ� Ŭ���� ������ ���� ������ �Լ��� ������ �� �� �ִ� �Լ�
	���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������,
	���� �����ڴ� ������ �����ؾ� �Ѵ�.
	*/

	//Mechanic* mechanic1 = new Vulture;
	//
	//cout << "Mechacnic�� ũ��: " << sizeof(Mechanic) << endl;

	/*
	���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������ ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��Ѵ�.
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
	���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ� ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�,
	�������� ����� �Լ��� ���� �Լ��� ������ �� �����ϴ�.
	*/
#pragma endregion

#pragma region ���� �Ҹ���
	/*
	��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� ������� ��� ȣ��Ǵ� �Ҹ���.
	*/
	Mechanic* unit1 = new Vulture;
	Mechanic* unit2 = new Tank;
	Mechanic* unit3 = new Goliath;

	delete unit1;
	delete unit2;
	delete unit3;

	/*
	���� �Ҹ��ڴ� ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ� ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������
	���� �ð��� �޸𸮿� �Ҵ�� ��ü�� ���� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �Ѵ�.
	*/
#pragma endregion

	return 0;
}
