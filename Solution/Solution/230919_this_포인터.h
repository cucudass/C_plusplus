#pragma once
#include <iostream>
using namespace std;

class Animal {
private:
	int age;
	float height;
	char blood;

public:
	Animal(int m_age, float m_height) : age(m_age), height(m_height) {
		cout << "age: " << age << endl;
		cout << "height: " << height << endl;
	}
#pragma region this ������
	/*
	��ü �ڱ� �ڽ��� ����Ű�� ������
	*/
	Animal(int age, float height, char blood) {
		this->age = age;
		this->height = height;
		this->blood = blood;

		cout << "��ü �ּ�: " << this << endl;
	}
#pragma endregion
};

int * Value() {
	int data = 10;
	return &data;
}

int main() {
	//Animal animal(5, 10.25f, 'A');

	int * ptr = Value();
	cout << *ptr << endl;
	*ptr = 300;
	cout << *ptr << endl;
	return 0;
}
