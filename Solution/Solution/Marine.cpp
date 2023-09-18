#include "Marine.h"

int maxhp = 40;

Marine::Marine()
{
	health = 20;
}

void Marine::Skill()
{
	cout << "½ºÆÀÆÑ" << endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= 100) {
		health = value;
	} else {
		cout << "¹üÀ§ ¿À·ù..." << endl;
	}
}

int Marine::GetHP()
{
	return health;
}
