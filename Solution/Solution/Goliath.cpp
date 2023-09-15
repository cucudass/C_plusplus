#include "Goliath.h"

Goliath::Goliath()
{
	health = 125;
	attack = 15;
}

void Goliath::Create()
{
	cout << "°ñ¸®¾Ñ »ý¼º" << endl;
}

void Goliath::Move()
{
	cout << "°ñ¸®¾Ñ ÀÌµ¿" << endl;
}

void Goliath::Attack()
{
	cout << "°ñ¸®¾Ñ °ø°Ý" << endl;
}

Goliath::~Goliath()
{
	cout << "°ñ¸®¾Ñ ¼Ò¸ê" << endl;
}
