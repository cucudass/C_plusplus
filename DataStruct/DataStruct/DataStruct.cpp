#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main()
{
	BinarySearchTree<int> root;
	root.Insert(10, root.getRoot());
	root.Insert(5, root.getRoot());
	root.Insert(15, root.getRoot());
	
	root.inorder(root.getRoot());
}