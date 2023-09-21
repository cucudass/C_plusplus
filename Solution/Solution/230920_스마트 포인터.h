#pragma once
#include <iostream>
#include <memory>
using namespace std;

#pragma region RAII ����
/*
�ڿ��� ������ ����� ���� ��ü�� ���̴� ������ ����� �Ǹ� �ڿ��� �������ִ� ���
*/
#pragma endregion

class File {
public:
	File() {
		cout << "creat file" << endl;
	}

	~File() {
		cout << "delete file" << endl;
	}
};

class Player {
private:

	int  health;
#pragma region weak ������
	/*
	�ڽ��� �����ϰ� �ִ� ���� �������� ���� ���� ī��Ʈ�� 0�� �Ǹ�, expired��� ���°� �Ǵµ�,
	�̴� ���� �������� ���� ī���Ͱ� 0�� �Ǿ� �޸𸮰� �����Ǿ�������, �� ���� �����͸� ������ weak �����͸�
	��ȿ���� �ʴٰ� �Ǵ��Ͽ� �����ϴ� ������
	*/
#pragma endregion

	weak_ptr<Player> partner;

public:
	Player() {
		cout << "Create Player" << endl;
	}
	~Player() {
		cout << "Delete Player" << endl;
	}

	void SetPartner(weak_ptr<Player> partner) {
		this->partner = partner;
	}
};

int main() {
#pragma region unique ������
	//// �� �ϳ��� ��ü�� ����ų �� �ִ� ����Ʈ ������
	//std::unique_ptr<File> uptr1(new File);
	//cout << "uptr1�� ��: " << uptr1 << endl;
	//
	//std::unique_ptr<File> uptr2 = std::make_unique<File>();
	//cout << "uptr2�� ��: " << uptr2 << endl;
	////�ϳ��� unique �����ʹ� �ϳ��� ��ü�� ���� �� �ִ�.
	////��ü�� ���� �������� �����ϴ� ���� �����մϴ�.
	//std::unique_ptr<File> uptr3 = std::move(uptr2);
	//cout << "uptr2�� ��: " << uptr2 << endl;
	//cout << "uptr3�� ��: " << uptr3 << endl;
#pragma endregion

#pragma region shared ������
	/*
	�ϳ��� ��ü�� ���� ���� �����Ͱ� ������ �� ������, ������ ������ ���� ī���͸� �̿��ؼ� �޸𸮸� �����ϴ� ����Ʈ ������
	*/
	/*
	std::shared_ptr<File> sptr1(new File());
	cout << sptr1.use_count() << endl;
	std::shared_ptr<File> sptr2 = sptr1;
	cout << sptr1.use_count() << endl;
	*/

	shared_ptr<Player> player1 = make_shared<Player>();
	shared_ptr<Player> player2 = make_shared<Player>();
	/*
	���� ���� ex) ����������
	*/
	player1->SetPartner(player2);
	player2->SetPartner(player1);

#pragma endregion


	return 0;
}
