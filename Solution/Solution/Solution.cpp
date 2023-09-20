#include <iostream>
#include <memory>
using namespace std;

#pragma region RAII 패턴
	/*
	자원의 안전한 사용을 위해 객체가 쓰이는 범위를 벗어나게 되면 자원을 해제해주는 기법
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
#pragma region weak 포인터
	/*
	자신이 참조하고 있는 원시 포인터의 강한 참조 카운트가 0이 되면, expired라는 상태가 되는데,
	이는 원시 포인터의 참조 카운터가 0이 되어 메모리가 해제되었음으로, 이 원시 포인터를 소유한 weak 포인터를 
	유효하지 않다고 판단하여 해제하는 포인터
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
#pragma region unique 포인터
	//// 단 하나의 객체만 가리킬 수 있는 스마트 포인터
	//std::unique_ptr<File> uptr1(new File);
	//cout << "uptr1의 값: " << uptr1 << endl;
	//
	//std::unique_ptr<File> uptr2 = std::make_unique<File>();
	//cout << "uptr2의 값: " << uptr2 << endl;
	////하나의 unique 포인터는 하나의 객체만 가질 수 있다.
	////객체에 대한 소유권을 이전하는 것은 가능합니다.
	//std::unique_ptr<File> uptr3 = std::move(uptr2);
	//cout << "uptr2의 값: " << uptr2 << endl;
	//cout << "uptr3의 값: " << uptr3 << endl;
#pragma endregion

#pragma region shared 포인터
	/*
	하나의 객체에 여러 개의 포인터가 공유할 수 있으며, 공유할 때마다 참조 카운터를 이용해서 메모리를 관리하는 스마트 포인터
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
	강한 참조 ex) 공유포인터
	*/
	player1->SetPartner(player2);
	player2->SetPartner(player1);

#pragma endregion


	return 0;
}
