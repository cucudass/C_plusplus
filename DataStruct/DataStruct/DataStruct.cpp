#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main()
{
	BinarySearchTree<int> bst;
	bst.rootnode = bst.Insert2(15, bst.rootnode);
	bst.Insert2(10, bst.rootnode);
	bst.Insert2(3, bst.rootnode);
	bst.Insert2(12, bst.rootnode);
	bst.Insert2(11, bst.rootnode);
	bst.Insert2(13, bst.rootnode);
	bst.Insert2(20, bst.rootnode);
	bst.Insert2(18, bst.rootnode);

	bst.Inorder2(bst.rootnode);
	cout << endl;
	cout << "MinValue: " << bst.FindMin(bst.rootnode) << endl;
	cout << "MaxValue: " << bst.FindMax(bst.rootnode) << endl;
	cout << "Find: " << bst.Find2(8, bst.rootnode) << endl;
	cout << "FindNode: " << bst.FindNode(12, bst.rootnode) << endl;
}