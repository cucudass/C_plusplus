#pragma once
#include <iostream>
using namespace std;

#pragma region final
/*
하위 클래스에서 더 이상 재정의할 수 없도록 선언하는 기능
*/

class Hero {
public:
	virtual void BasicSkiil() { };
	virtual void MagicSkiil() { };
};

class Crusaders : public Hero {
	void BasicSkiil() { };
	void MagicSkiil() final { };
};

class Fighter : public Crusaders {
	void BasicSkiil() { };
	// void MagicSkiil() { }; -> ERROR final로 정의되어서 재정의 불가
};
#pragma endregion

int main() {

	return 0;
}
