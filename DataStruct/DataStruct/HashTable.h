#pragma once
#include <iostream>
#include <string>
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

	template<typename T>
	int HashFunction(T key) {
		int hashIndex = (int)key % SIZE;

		return hashIndex;
	}

	template<>
	int HashFunction(string key) {
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
	void Remove(KEY key) {
		int index = HashFunction(key);
		Node * currentNode = bucket[index].head;
		Node * traceNode = nullptr;
		if (bucket[index].count > 0) {
			while (currentNode != nullptr) {
				if (currentNode->key == key) {
					if (currentNode == bucket[index].head) {
						bucket[index].head = currentNode->next;
					} else {
						traceNode->next = currentNode->next;
					}
					delete currentNode;
					bucket[index].count--;
					return;
				}
				traceNode = currentNode;
				currentNode = currentNode->next;
			}
			cout << "Not Key Found\n";
		} else {
			cout << "Table is Empty\n";
		}
	}
	int & Count(KEY key) {
		return bucket[HashFunction(key)].count;
	}
	void Display() {
		for (int i = 0; i < SIZE; i++) {
			Node * showNode = bucket[i].head;
			cout << "[" << i << "]\n";
			while(showNode != nullptr) {
				cout << "[Key: " << showNode->key << ", value: " << showNode->value << "] ";
				showNode = showNode->next;
			}
			cout << endl;
		}
	}
	~HashTable() {
	}
};
