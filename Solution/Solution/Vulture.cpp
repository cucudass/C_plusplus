#include "Vulture.h"

Vulture::Vulture()
{
	health = 80;
	attack = 20;
}

void Vulture::Create() {
	cout << "国贸 积己" << endl;
}

void Vulture::Move()
{
	cout << "国贸 捞悼" << endl;
}

void Vulture::Attack()
{
	cout << "国贸 傍拜" << endl;
}

Vulture::~Vulture()
{
	cout << "国贸 家戈" << endl;
}
