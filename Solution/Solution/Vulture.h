#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();
#pragma region �Լ��� �������̵�
	//���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ� ����ϴ� ���
	
	void Move();

	/*
	�Լ��� �������̵�� ��� ���迡���� �̷������,
	���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ� �Ѵ�.
	*/
	virtual void Create() override;
	virtual void Attack() override;

	~Vulture();
#pragma endregion

};

