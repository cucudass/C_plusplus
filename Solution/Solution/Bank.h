#pragma once
#include "Player.h"
#pragma region Ŭ������ ���� ����
/*
���ʿ��� ��� ������ �����ϰ� ���ԵǴ� ���� �����Ͽ�, ��������� ������ �ӵ��� ����Ų��.
*/
// class Player
#pragma endregion

class Bank
{
private:
	int bankMoney = 0;
public:
	void Withdrawal(Player &player, int money);
	void ShowInfo();
};

