#include "Tank.h"

Tank::Tank()
{
	health = 150;
	attack = 30;
}

void Tank::Create() {
	cout << "��ũ ����" << endl;
}

void Tank::Move()
{
	cout << "��ũ �̵�" << endl;
}

void Tank::Attack()
{
	cout << "��ũ ����" << endl;
}

Tank::~Tank()
{
	cout << "��ũ �Ҹ�" << endl;
}
