#pragma once
#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <vector>
using namespace std;

int main() {
#pragma region string(���ڿ�)
	/*
	std::string content = "Content";
	cout << "content ������ ��: " << content << endl;
	cout << "content ������ ��: " << content.size() << endl;
	*/
#pragma endregion

#pragma region ���� �����̳�
	/*
	KEY�� VALUE�� �ϳ��� �������� �̷���� �����̳�
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
	////dataList.begin() // ù ��° �ּ� ��ȯ
	////dataList.end() // ������ �ּ��� ���� �ּҸ� ��ȯ
	//list<int>::iterator iter;
	//
	//iter = dataList.begin();
	//dataList.insert(iter, 77);
	//
	//for (iter = dataList.begin(); iter != dataList.end(); iter++) {
	//	cout << *iter << endl;
	//}

	/* ���� emplace_back, erase
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
