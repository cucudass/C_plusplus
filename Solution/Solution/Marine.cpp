#include "Marine.h"



Marine::Marine()
{
	maxHp = health = 40;
	cout << "���� ����" << endl;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= 100) {
		health = value;
	}
}

void Marine::SetMaxHP(int maxhp)
{
	if (maxhp >= 0 && maxhp <= 100) {
		health = maxhp;
	}
}

void Marine::RecoveryHP()
{
	health = maxHp;
}

int Marine::GetHP()
{
	return health;
}

int Marine::GetMaxHP()
{
	return maxHp;
}


