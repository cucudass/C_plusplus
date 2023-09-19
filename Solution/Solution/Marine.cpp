#include "Marine.h"



Marine::Marine()
{
	maxHp = health = 40;
	cout << "¸¶¸° »ý¼º" << endl;
}

void Marine::Skill()
{
	cout << "½ºÆÀÆÑ" << endl;
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


