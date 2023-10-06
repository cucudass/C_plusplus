#pragma once
#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>
using namespace std;

int main() {
#pragma region string(문자열)
	/*
	std::string content = "Content";
	cout << "content 변수의 값: " << content << endl;
	cout << "content 변수의 값: " << content.size() << endl;
	*/
#pragma endregion

#pragma region 연관 컨테이너
	/*
	KEY와 VALUE가 하나의 구성으로 이루어진 컨테이너
	*/
	//std::list<int> dataList;
	//
	//dataList.push_back(10);
	//dataList.push_front(50);
	//dataList.push_front(25);
	//dataList.push_back(33);
	//
	//dataList.pop_back();
	//
	////dataList.begin() // 첫 번째 주소 반환
	////dataList.end() // 마지막 주소의 다음 주소를 반환
	//list<int>::iterator iter;
	//
	//iter = dataList.begin();
	//dataList.insert(iter, 77);
	//
	//for (iter = dataList.begin(); iter != dataList.end(); iter++) {
	//	cout << *iter << endl;
	//}

	/* 벡터 emplace_back, erase
	vector<int> vectorInt;
	vector<int>::iterator vecorIter;

	vectorInt.reserve(8);

	vectorInt.emplace_back(10);
	vectorInt.emplace_back(20);
	vectorInt.emplace_back(30);
	vectorInt.emplace_back(40);

	vecorIter = vectorInt.begin();
	vectorInt.erase(vecorIter + 2);
	for (int i = 0; i < vectorInt.size(); i++) {
		cout << vectorInt[i] << "\n";
	}
	*/

#pragma endregion

	return 0;
}
