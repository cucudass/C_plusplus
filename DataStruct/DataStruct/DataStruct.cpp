#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * left;
	Node * right;
};

Node * CreateNode(int data, Node * left = nullptr, Node * right = nullptr) {
	// 노드 생성
	Node * node = new Node;
	// data 값을 저장
	node->data = data;
	node->left = left;
	node->right = right;

	return node;
};
void print(Node * root) {
	if (root == NULL)
		return;
	cout << root->data << " ";
	print(root->left);
	print(root->right);
}
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
void preorder(Node * root) {
	if (root == NULL)
		return;
	cout << root->data << " ";
	print(root->left);
	print(root->right);
}
void inorder(Node * root) {
	if (root == NULL)
		return;

	print(root->left);
	cout << root->data << " ";
	print(root->right);
}
void postorder(Node * root) {
	if (root == NULL)
		return;

	print(root->left);
	print(root->right);
	cout << root->data << " ";
}
/*
전위 순회
	- root Node를 방문한다.
	- 왼쪽 서브 트리를 전위 순회
	- 오른쪽 서브 트리를 전위 순회 
	- 출력 예 -> 1 2 4 5 3 6 7
*/
/*
중위 순회
	- 왼쪽 서브 트리를 전위 순회한다.
	- Root node를 방문
	- 오른쪽 서브 트리를 전위 순회한다.
*/
/*
후위 순회
	- 왼쪽 서브 트리를 전위 순회한다.
	- 오른쪽 서브 트리를 전위 순회한다.
	- Root node를 방문
*/

int main()
{
#pragma region 트리
	/*
	그래프의 일종으로 정점과 간선을 이용하여 데이터의 배치 형태를 추상화한 자료 구조
	*/
	Node * node7 = CreateNode(7);
	Node * node6 = CreateNode(6);
	Node * node5 = CreateNode(5);
	Node * node4 = CreateNode(4);
	Node * node3 = CreateNode(3, node6, node7);
	Node * node2 = CreateNode(2, node4, node5);
	Node * node1 = CreateNode(1, node2, node3);

	cout << "전위: ";
	preorder(node1);

	cout << "중위: ";
	inorder(node1);

	cout << "후위: ";
	postorder(node1);
#pragma endregion	
}