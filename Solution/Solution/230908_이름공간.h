#include <iostream>
using namespace std;

int data = 25;

namespace A {
	void Attack() {
		cout << "A �������� Attack( )" << endl;
	}
}

namespace B {
	void Attack() {
		cout << "B �������� Attack( )" << endl;
	}
}

void Damage(int hp = 100) {
	hp -= 25;
	cout << "hp�� �� : " << hp << endl;
}

//�⺻ �Ű������� �����ʿ��� ���� �����ؾ� �Ѵ�.
void Move(int x, int y, int z = 10) {
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
#pragma region ��������������
	//���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������
	//���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��, ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʴ´�.

	//int data = 100;
	//
	//std::cout << "�������� exp�� �� : " << data << std::endl;
	//std::cout << "�������� exp�� �� : " << ::data << std::endl;
#pragma endregion

#pragma region namespace(�̸� ����)
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.
	//A::Attack();
	//B::Attack();
#pragma endregion

#pragma region �⺻ �Ű�����
	////�Լ��� �Ű� ������ ���� ���޵��� �ʾ��� ��, �⺻ ������ �����Ǵ� �Ű� ����
	//int hp = 100;
	//Damage();
	//Move(5, 10);
	////�⺻ �Ű������� �ִ� ��ġ�� �ٽ� ���ο� �μ��� ���� �� �ִ�.
	//Move(5, 10, 2);
#pragma endregion

#pragma region �ּ� �����
	int x = 0;
	int y = 0;
	int z = 0;
	cin >> x >> y;
	int a, b = 0;
	if (x > y) {
		a = x;
		b = y;
	}
	else {
		a = y;
		b = x;
	}

	cout << (x*y) / gcd(a, b);

#pragma endregion

	return 0;
}
