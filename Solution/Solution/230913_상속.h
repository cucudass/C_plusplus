#pragma once
#include <iostream>
#include "Camera.h"

using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ��� �������ִ� ���

class Vehicles {
protected:
	float speed;
	static int KillCount;

public:
	Vehicles() {
		cout << "Vehicles ������Ʈ" << endl;
	}

	void Movement() {
		cout << "�̵�" << endl;
	}

	static int GetCount() {
		return KillCount;
	}

	~Vehicles() {
		cout << "Vehicles ������Ʈ ����" << endl;
	}
};

int Vehicles::KillCount = 0;

class Car : public Vehicles {
public:
	Car() {
		carID = 1;
		speed = 100;
		cout << "Car ������Ʈ" << endl;
	}

	~Car() {
		cout << "Car ������Ʈ ����" << endl;
		cout << "KillCount: " << ++KillCount << endl;
	}
private:
	int carID;
};

/*
Ŭ������ ��� �ܰ迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� �� ������,
���� Ŭ������ ���� Ŭ������ �޸𸮸� ������ ���·� �޸��� ũ�Ⱑ ����
*/

#pragma endregion

int main() {
#pragma region ���

	Car car1;
	Car car2;
	Car car3;

	cout << "killcount: " << Vehicles::GetCount() << endl;
	cout << "car�� ũ��: " << sizeof(Car) << endl;
	cout << "vehicles�� ũ��: " << sizeof(Vehicles) << endl;
#pragma endregion

#pragma region Ŭ���� ���Ұ� ����
	//Camera camera;
	//camera.Information();

#pragma endregion

	return 0;
}
