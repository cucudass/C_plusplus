#pragma once
#include <iostream>
using namespace std;

#pragma region Ŭ����
//����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ� ������, Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� ����� �� �ִ� ����ü

class GameObject {
	//����������
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� ������.
	//public -> Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ���� �ܺο��� ������ ����ϴ� ������
	//protected -> Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������, ������ ����ϴ� ������
	//private -> Ŭ���� ���ο����� ������ ����ϴ� ������

	//�⺻ ���� ������(private)	

public:
	float x;
	void SendMessage() {
		cout << "�޽���" << endl;
	}
protected:
	float y;
private:
	double z;
};
#pragma endregion 

#pragma region ������
//Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ�
class Monster {
private:
	int health;

public:
	Monster() {
		cout << "Monster ����" << endl;
	}

	/*
	�������� ��� ��ü�� ������ �� �� �� ���� ȣ��Ǹ�, �����ڴ� ��ȯ���� �������� �ʱ� ������
	�����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ����� �ʴ´�.
	*/

	//�Ҹ��� ��ü�� �Ҹ�ɶ� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ�
	~Monster() {
		cout << "Monster �Ҹ�" << endl;
	}
	/*
	�Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �� ���� ȣ��Ǹ�,
	�Ҹ��ڿ��� �Ű������� �����Ͽ� ����� �� ����.
	*/
};
#pragma endregion


int main() {

#pragma region Ŭ����
	//GameObject gameobject1;
	//GameObject gameobject2;
	//
	//cout << sizeof(gameobject1) << endl;
	//gameobject1.SendMessage();
	//gameobject2.SendMessage();
	//
	//gameobject1.x = 100;
#pragma endregion

#pragma region ������, �Ҹ���
	Monster monster;
	Monster *ptr = new Monster;
	delete ptr;
#pragma endregion


	return 0;
}
