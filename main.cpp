   
#include <iostream>
#include "binarySearchTree.h"

using namespace std;
void test(bSearchTreeType<int>& myBinaryTree);

int main()
{
	
bSearchTreeType<int> tree;
test(tree);

system("pause");
return 0 ;

}


void test(bSearchTreeType<int>& myBinaryTree){
	
myBinaryTree.insert(10);
myBinaryTree.insert(-5);
myBinaryTree.insert(20);
myBinaryTree.insert(88);
myBinaryTree.insert(34);

cout << "Inorder Traversing: [ ";
myBinaryTree.inorderTraversal();
cout << " ]" << endl;
myBinaryTree.swapSubTrees();
cout <<  "After swapping [ ";
myBinaryTree.inorderTraversal();
cout << " ]" << endl;

}