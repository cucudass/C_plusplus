#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

#pragma region 선형 컨테이너
/*
데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인 컨테이너
*/
#pragma endregion

int createCount;

int main() {
#pragma region Vector 컨테이너
	/*
	std::vector<int> vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);

	cout << "vector.size: " << vector.size() << endl;
	cout << "cpacity: " << vector.capacity() << endl;

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << endl;
	}

	vector.push_back(40);
	vector.push_back(50);

	vector.pop_back();

	cout << "vector.size: " << vector.size() << endl;
	cout << "cpacity: " << vector.capacity() << endl;

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << endl;
	}
	*/
#pragma endregion

#pragma region 리듬 게임
	srand(time(NULL));
	vector<const char *> note;
	createCount = 5;
	int life = 5;
	const char * arrow[4];	
	arrow[0] = "→";
	arrow[1] = "←";
	arrow[2] = "↑";
	arrow[3] = "↓";

	for (int i = 0; i < createCount; i++) {
		int random = rand() % 4;
		note.push_back(arrow[random]);
	}

	for (int i=0; i < note.size(); i++) {
		cout << note[i] << " ";
	}
	
#pragma endregion
	return 0;
}
