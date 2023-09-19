#include "Ghost.h"

Ghost::Ghost()
{
	maxHp = health = 45;
	cout << "고스트 생성" << endl;
}

void Ghost::Skill()
{
	cout << "락 다운" << endl;
}

void Ghost::SetHP(int value)
{
	if (value >= 0 && value <= 100) {
		health = value;
	}
}

void Ghost::SetMaxHP(int maxhp)
{
	if (maxhp >= 0 && maxhp <= 100) {
		health = maxhp;
	}
}

void Ghost::RecoveryHP()
{
	health = maxHp;
}

int Ghost::GetHP()
{
	return health;
}

int Ghost::GetMaxHP()
{
	return maxHp;
}
