#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <set>
using namespace std;

int main() {
#pragma region std::map
	/*
	std::map<string, int> mapdata;
	map<string, int>::iterator matIt;

	mapdata.insert(make_pair("Sword", 5000));
	mapdata.insert(make_pair("Armor", 2500));

	for (matIt = mapdata.begin(); matIt != mapdata.end(); matIt++)
	{
		cout << "KEY: " << matIt->first << endl;
		cout << "Value: " << matIt->second << endl;
	}

	if (mapdata.find("Sword") != mapdata.end()) {
		cout << "데이터가 존재합니다." << endl;
	} else {
		cout << "Not key found" << endl;
	}
	*/
#pragma endregion

#pragma region std::set
	set<int> setData;
	/*
	키 중복 X -> 중복된 값을 들어갔을 때, 중복된 값을 제거하고 저장한다.
	*/
	setData.insert(10);
	setData.insert(20);
	setData.insert(40);
	setData.insert(30);

	set<int>::iterator setIt;
	setIt = setData.begin();
	setData.erase(setIt);

	for (setIt = setData.begin(); setIt != setData.end(); setIt++)
	{
		cout << "KEY: " << *setIt << endl;
	}

#pragma endregion

	
	return 0;
}
