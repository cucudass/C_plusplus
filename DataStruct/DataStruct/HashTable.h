#pragma once
#include <iostream>
#include <string.h>
using namespace std;
#pragma region �ؽ� ���̺�
	/*
	(Key, Value)�� �����͸� �����ϴ� �ڷ� ���� �� �ϳ��� ������ �����͸� �˻��� �� �ִ� �ڷ� ����
	��� �ð� ���⵵ O(1)

	�ؽ� �浹�� �ذ��ϴ� ���
	<ü�̴� ���>
	  - �� �ؽ� ��Ŷ�� ���� ����Ʈ�� �����ϴ� ���. 
	  �ؽ� �浹 �߻� �� ������ �ؽ� ���� �ش��ϴ� �����͵��� ���Ḯ��Ʈ�� �����Ͽ� ����.
	<���� �ּҹ�>
	  - �浹 �߻� �� �� ���Ͽ� �����͸� �����ϴ� ���
	    �� ��Ŷ�� ��� ������ ���� ���� ���� ����� �޶�����.
		���� Ž��: �浹 �߻� �� �տ��� ���� ���ʴ�� �� ��Ŷ�� ã�� ���� �����ϴ� ���
		���� Ž��: �浹 �߻� �� 2^2, 2^3��ŭ ������ �� ��Ŷ�� ã�� ���� �����ϴ� ���
		���� �ؽ�: �ؽ� ���� �ѹ� �� �ؽ� �Լ��� �־� �ٸ� �Լ��� �����ϴ� ���
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
		//���ο� ��� ����
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
