#include "Firebet.h"




Firebet::Firebet()
{
	maxHp = health = 50;
	cout << "���̾�� ����" << endl;
}

void Firebet::Skill()
{
	cout << "����..." << endl;
}

void Firebet::SetHP(int value)
{
	if (value >= 0 && value <= 100) {
		health = value;
	}
}

void Firebet::SetMaxHP(int maxhp)
{
	if (maxhp >= 0 && maxhp <= 100) {
		health = maxhp;
	}
}

void Firebet::RecoveryHP()
{
	health = maxHp;
}

int Firebet::GetHP()
{
	return health;
}

int Firebet::GetMaxHP()
{
	return maxHp;
}
