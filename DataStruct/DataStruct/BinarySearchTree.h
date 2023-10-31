#pragma once
#include <iostream>
using namespace std;
#pragma region ���� Ž�� Ʈ��(BST)
/*
	������ Ű�� ���� ���Ҹ� ����, ����, �˻��ϴµ� ȿ������ �˰��� �Դϴ�.
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

