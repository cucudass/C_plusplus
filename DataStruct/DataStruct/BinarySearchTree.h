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
	Node * InsertHelper(T data, Node*& root) {
		if (root == nullptr) {
			root = new Node;
			root->data = data;
			root->left = root->right = nullptr;

			return root;
		} else {
			if (data < root->data) {
				return InsertHelper(data, root->left);
			} else {
				return InsertHelper(data, root->right);
			}
		}
	}
	void InorderHelper(Node * root) {
		if (root != nullptr) {
			InorderHelper(root->left);
			cout << root->data << " ";
			InorderHelper(root->right);
		}
	}
	void MinHelper(Node * root) {
		if (root->left != nullptr)
			MinHelper(root->left);
		else
			cout << root->data;
	}
	void MaxHelper(Node * root) {
		if (root->right != nullptr)
			MinHelper(root->right);
		else
			cout << root->data;
	}
	bool FindHelper(T data, Node * root) {
		cout << boolalpha;
		if (root->data == data) {
			return true;
		} else if (root->data > data && root->right != nullptr) {
			return FindHelper(data, root->right);
		} else if (root->data < data && root->left != nullptr) {
			return FindHelper(data, root->left);
		} else {
			return false;
		}
		
	}
	Node * root;
	Node * parent;
	Node * deleteNode;
public:
	Node * rootnode;
	BinarySearchTree() {
		root = nullptr;
	};
	void Insert(T data) {
		if (Find(data)) {
			cout << data << " 데이터가 이미 존재하기에 무시합니다...\n";
		} else {
			InsertHelper(data, root);
		}
	}
	void Inorder() {
		InorderHelper(root);
		cout << endl;
	}
	void MinValue() {
		MinHelper(root);
		cout << endl;
	}
	void MaxValue() {
		MaxHelper(root);
		cout << endl;
	}
	bool Find(T data) {
		return FindHelper(data, root);
		cout << endl;
	}
	/****************************************************/
	Node * Insert2(T data, Node * root) {
		if (Find2(data, root)) {
			cout << data << " 데이터가 존재합니다.\n";
			return root;
		}

		if (root == nullptr) {
			root = new Node;
			root->data = data;
			root->left = root->right = nullptr;
		} else if (root->data > data) {
			root->left = Insert2(data, root->left);
		} else if (root->data < data) {
			root->right = Insert2(data, root->right);
		}
		return root;
		
	}
	void Inorder2(Node * root) {
		if (root != nullptr) {
			Inorder2(root->left);
			cout << root->data << " ";
			Inorder2(root->right);
		}
	}
	T & FindMin(Node * root) {
		if (root == nullptr) {
			cout << "Tree is Empyt\n";
			exit(1);
		} else {
			if (root->left != nullptr)
				return FindMin(root->left);
			return root->data;
		}
	}
	T & FindMax(Node * root) {
		if (root == nullptr) {
			cout << "Tree is Empty\n";
			exit(1);
		} else {
			if (root->right != nullptr)
				return FindMax(root->right);
			return root->data;
		}
	}
	bool Find2(T data, Node * root) {
		cout << boolalpha;
		if (root == nullptr)
			return false;
		if (root->data == data) {
			return true;
		} else if (root->data > data) {
			return Find2(data, root->left);
		} else {
			return Find2(data, root->right);
		}
	}
	Node * FindNode(T data, Node * root) {
		if (root != nullptr) {
			if (root->data == data) {
				return root;
			} else if(root->data > data){
				return FindNode(data, root->left);
			} else {
				return FindNode(data, root->right);
			}
		}
	}
	void Delete(T data, Node * root) {
		if (root == nullptr) {
			cout << "Tree is Empty\n";
		} else {
			if (!Find2(data, root)) {
				cout << "존재하지 않는 데이터입니다.\n";
			} else {
				deleteNode = FindNode(data, root);

			}
		}
	}
};

