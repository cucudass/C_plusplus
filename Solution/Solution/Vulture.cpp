#include "Vulture.h"

Vulture::Vulture()
{
	health = 80;
	attack = 20;
}

void Vulture::Create() {
	cout << "��ó ����" << endl;
}

void Vulture::Move()
{
	cout << "��ó �̵�" << endl;
}

void Vulture::Attack()
{
	cout << "��ó ����" << endl;
}

Vulture::~Vulture()
{
	cout << "��ó �Ҹ�" << endl;
}
