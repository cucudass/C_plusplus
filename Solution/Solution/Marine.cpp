#include "Marine.h"

int maxhp = 40;

Marine::Marine()
{
	health = 20;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= 100) {
		health = value;
	} else {
		cout << "���� ����..." << endl;
	}
}

int Marine::GetHP()
{
	return health;
}
