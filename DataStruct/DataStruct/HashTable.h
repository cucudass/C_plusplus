#pragma once
#include <iostream>
#include <string.h>
using namespace std;
#pragma region 해시 테이블
	/*
	(Key, Value)로 데이터를 저장하는 자료 구조 중 하나로 빠르게 데이터를 검색할 수 있는 자료 구조
	평균 시간 복잡도 O(1)

	해시 충돌을 해결하는 방법
	<체이닝 기법>
	  - 각 해시 버킷을 연결 리스트로 구성하는 방식. 
	  해시 충돌 발생 시 동일한 해시 값에 해당하는 데이터들을 연결리스트로 연결하여 저장.
	<개방 주소법>
	  - 충돌 발생 시 빈 버켓에 데이터를 저장하는 방식
	    빈 버킷을 어떻게 결정할 지에 따라 구현 방식이 달라진다.
		선형 탐사: 충돌 발생 시 앞에서 부터 차례대로 빈 버킷을 찾아 값을 저장하는 방식
		이차 탐사: 충돌 발생 시 2^2, 2^3만큼 떨어진 빈 버킷을 찾아 값을 저장하는 방식
		이중 해싱: 해시 값을 한번 더 해시 함수에 넣어 다른 함수를 도출하는 방식
	*/
#pragma endregion

#define SIZE 5

template<typename KEY, typename VALUE>
class HashTable {
private:
	struct Node {
		KEY key;
		VALUE value;

		Node * next;
	};
	struct Bucket {
		int count;
		Node * head;
	};
	int HashFunction(KEY key) {
		int hashIndex = 0;
		for (char element : key) {
			hashIndex += element;
		}
		return hashIndex %= SIZE;
	}
	Node * CreateNode(KEY key, VALUE value) {
		Node * newNode = new Node();

		newNode->key = key;
		newNode->value = value;
		newNode->next = nullptr;

		return newNode;
	}
	Bucket bucket[SIZE];
public:
	HashTable() {
		for (int i = 0; i < SIZE; i++)
		{
			bucket[i].count = 0;
			bucket[i].head = nullptr;
		}
	}
	void Insert(KEY key, VALUE value) {
		int index = HashFunction(key);
		//새로운 노드 생성
		Node * newNode = CreateNode(key, value);

		if (bucket[index].head == nullptr) {
			bucket[index].head = newNode;
			bucket[index].count++;
		} else {
			newNode->next = bucket[index].head;
			bucket[index].head = newNode;
			bucket[index].count++;
		}
	}
	int & Count(KEY key) {
		return bucket[HashFunction(key)].count;
	}
	void Display(KEY key) {
		int index = HashFunction(key);

		while (bucket[index].head != nullptr) {
			cout << bucket[index].head->value << " ";
			bucket[index].head = bucket[index].head->next;
		}
	}
};
