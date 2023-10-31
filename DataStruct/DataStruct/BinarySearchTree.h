#pragma once
#include <iostream>
using namespace std;
#pragma region 이진 탐색 트리(BST)
/*
	임의의 키를 가진 원소를 삽입, 삭제, 검색하는데 효율적인 알고리즘 입니다.
*/
#pragma endregion


template<typename T>
class BinarySearchTree {
private:
	struct Node {
		T data;
		Node * left;
		Node * right;
	};
	Node * root;
public:
	BinarySearchTree() {
		root = nullptr;
	};

	void Insert(T data, Node * root) {
		if (root == nullptr) {
			root = new Node;
			root->data = data;
			root->left = root->right = nullptr;

		} else {
			if (data < root->data) {
				Insert(data, root->left);
			} else {
				Insert(data, root->right);
			}
		}
	}

	void inorder(Node * root) {
		if (root == NULL)
			return;
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}

	Node * getRoot() {
		return root;
	}
};

