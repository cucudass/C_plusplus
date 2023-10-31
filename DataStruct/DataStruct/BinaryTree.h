#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * left;
	Node * right;
};

Node * CreateNode(int data, Node * left = nullptr, Node * right = nullptr) {
	// ��� ����
	Node * node = new Node;
	// data ���� ����
	node->data = data;
	node->left = left;
	node->right = right;

	return node;
};

void display_node(Node * root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	if (root->left != NULL) {
		cout << root->left->data << " ";
	}
	if (root->right != NULL) {
		cout << root->right->data << " ";
	}
	cout << "\n";

	if (root->left) {
		display_node(root->left);
	}
	if (root->right) {
		display_node(root->right);
	}
}

/*
���� ��ȸ
	- root Node�� �湮�Ѵ�.
	- ���� ���� Ʈ���� ���� ��ȸ
	- ������ ���� Ʈ���� ���� ��ȸ
	- ��� �� -> 1 2 4 5 3 6 7
*/
void preorder(Node * root) {
	if (root == NULL)
		return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
/*
���� ��ȸ
	- ���� ���� Ʈ���� ���� ��ȸ�Ѵ�.
	- Root node�� �湮
	- ������ ���� Ʈ���� ���� ��ȸ�Ѵ�.
*/
void inorder(Node * root) {
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
/*
���� ��ȸ
	- ���� ���� Ʈ���� ���� ��ȸ�Ѵ�.
	- ������ ���� Ʈ���� ���� ��ȸ�Ѵ�.
	- Root node�� �湮
*/
void postorder(Node * root) {
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int main()
{
#pragma region Ʈ��
	/*
	�׷����� �������� ������ ������ �̿��Ͽ� �������� ��ġ ���¸� �߻�ȭ�� �ڷ� ����
	*/
	Node * node7 = CreateNode(7);
	Node * node6 = CreateNode(6);
	Node * node5 = CreateNode(5);
	Node * node4 = CreateNode(4);
	Node * node3 = CreateNode(3, node6, node7);
	Node * node2 = CreateNode(2, node4, node5);
	Node * node1 = CreateNode(1, node2, node3);

	cout << "����: ";
	preorder(node1);
	cout << endl;

	cout << "����: ";
	inorder(node1);
	cout << endl;

	cout << "����: ";
	postorder(node1);
	cout << endl;
#pragma endregion	
}