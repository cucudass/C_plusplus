#pragma once
#include <iostream>
using namespace std;

#pragma region final
/*
���� Ŭ�������� �� �̻� �������� �� ������ �����ϴ� ���
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
	// void MagicSkiil() { }; -> ERROR final�� ���ǵǾ ������ �Ұ�
};
#pragma endregion

int main() {

	return 0;
}
