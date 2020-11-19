#include <iostream>
#include "IntBinaryTree.h"
using namespace std;



int main()
{
    IntBinaryTree tree;

    cout << "Inserting nodes.\n";

    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);
    tree.insertNode(12);
    tree.insertNode(9);

    //Display inorder
    cout<<"Inorder traversal: \n";
    tree.displayInOrder();

    //Display preorder
    cout<<"Preorder traversal: \n";
    tree.displayPreOrder();

    //Display postorder
    cout<<"Postorder traversal: \n";
    tree.displayPostOrder();

    //searching number
    if(tree.searchNode(8))
    {
        cout<<"Number 8 is found\n"<<endl;
    }

    tree.remove(8);
    tree.remove(12);

    cout<<"Here are the nodes.\n";

    tree.displayInOrder();

    return 0;
}