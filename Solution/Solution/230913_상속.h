#pragma once
#include <iostream>
#include "Camera.h"

using namespace std;

#pragma region 상속
// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능

class Vehicles {
protected:
	float speed;
	static int KillCount;

public:
	Vehicles() {
		cout << "Vehicles 오브젝트" << endl;
	}

	void Movement() {
		cout << "이동" << endl;
	}

	static int GetCount() {
		return KillCount;
	}

	~Vehicles() {
		cout << "Vehicles 오브젝트 해제" << endl;
	}
};

int Vehicles::KillCount = 0;

class Car : public Vehicles {
public:
	Car() {
		carID = 1;
		speed = 100;
		cout << "Car 오브젝트" << endl;
	}

	~Car() {
		cout << "Car 오브젝트 해제" << endl;
		cout << "KillCount: " << ++KillCount << endl;
	}
private:
	int carID;
};

/*
클래스의 상속 단계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며,
하위 클래스는 상위 클래스의 메모리를 포함한 생태로 메모리의 크기가 결정
*/

#pragma endregion

int main() {
#pragma region 상속

	Car car1;
	Car car2;
	Car car3;

	cout << "killcount: " << Vehicles::GetCount() << endl;
	cout << "car의 크기: " << sizeof(Car) << endl;
	cout << "vehicles의 크기: " << sizeof(Vehicles) << endl;
#pragma endregion

#pragma region 클래스 분할과 구현
	//Camera camera;
	//camera.Information();

#pragma endregion

	return 0;
}
