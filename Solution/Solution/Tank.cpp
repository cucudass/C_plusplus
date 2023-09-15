#include "Tank.h"

Tank::Tank()
{
	health = 150;
	attack = 30;
}

void Tank::Create() {
	cout << "ÅÊÅ© »ý¼º" << endl;
}

void Tank::Move()
{
	cout << "ÅÊÅ© ÀÌµ¿" << endl;
}

void Tank::Attack()
{
	cout << "ÅÊÅ© °ø°Ý" << endl;
}

Tank::~Tank()
{
	cout << "ÅÊÅ© ¼Ò¸ê" << endl;
}
