#pragma once
#include <iostream>
using namespace std;

#pragma region ���� ������
//���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������	
class Item {
	//�⺻ ������
	//public: item() { }
private:
	int price;
	int *size = new int;

public:
	Item() {
		price = 100;
		*size = 100;
	}

	Item(const Item &item) {
		price = item.price;
		size = new int;
		*size = 9;
	}

	void Show() {
		cout << "price: " << price << endl;
		cout << "*size: " << *size << endl;
	}

	~Item() {
		delete size;
	}
};
#pragma endregion

#pragma region ���� ����
//��ü�� ������ �� �ּ� ���� �����Ͽ� ���� �޸𸮸� ����Ű�� ����
//int *ptr1 = new int;
//int *ptr2 = ptr1;
//
//*ptr2 = 1000;
//
//cout << "ptr1�� ����Ű�� ��: " << *ptr1 << endl;
//cout << "ptr2�� ����Ű�� ��: " << *ptr2 << endl;
//
//delete ptr1;
// delete ptr2; ERROR
/*
���� ����� �޸𸮿��� ������ �� �������� ���� ������ �ݴ�� �Ҹ��ڰ� ����˴ϴ�.
������ ��ü�� ���� ����������, ���� �ִ� ��ü�� ������ ���� �̹� ������ �޸𸮿� �����ϰ� �ȴ�.
*/
#pragma endregion

#pragma region ���� ����
//��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� ����


#pragma endregion


int main() {
	Item item1;
	Item item2 = item1;
	item1.Show();
	item2.Show();

	return 0;
}
