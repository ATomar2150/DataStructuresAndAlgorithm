#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
#include <iostream>
using namespace std;

class IntBinaryTree
{
    private:
            struct TreeNode
            {
                int value; //The value in the node
                TreeNode* left; //Pointer to the left child
                TreeNode* right; //Pointer to the right child
            };

            TreeNode* root; //Pointer to the root node

            //Private member functions
            void insert(TreeNode *&, TreeNode *&);
            //void destroySubTree(TreeNode *);
            void deleteNode(int, TreeNode *&);
            void makeDeletion(TreeNode *&);
            void displayInOrder(TreeNode *) const;
            void displayPreOrder(TreeNode *) const;
            void displayPostOrder(TreeNode *) const;

    public:
            //Constructor
            IntBinaryTree()
            {
                root = NULL;
            }

            // Destructor
            // ~IntBinaryTree()
            // {
            //     destroySubTree(root);
            // }

            //Binary Tree Operatios
            void insertNode(int);
            bool searchNode(int);
             void remove(int);
            void displayInOrder() const
            {
                displayInOrder(root);
            }

            void displayPreOrder() const
            {
                displayPreOrder(root);
            }
            void displayPostOrder() const
            {
                displayPostOrder(root);
            }

};

#endif

void IntBinaryTree::insertNode(int num)
{
    TreeNode* newNode = new TreeNode;

    //Create a new node and store num in it.
    newNode->value = num;
    newNode->left = NULL;
    newNode->right = NULL;

    //Insert the new node
    insert(root, newNode);
}

void IntBinaryTree::insert(TreeNode* &nodePtr, TreeNode* &newNode)
{
    if(nodePtr == NULL)
    {
        nodePtr = newNode;
    }
    else if(newNode->value < nodePtr->value)
    {
        insert(nodePtr->left, newNode);
    }
    else if(newNode->value > nodePtr->value)
    {
        insert(nodePtr->right, newNode);
    }
}

void IntBinaryTree::displayInOrder(TreeNode* nodePtr) const
{
    if(nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout<<nodePtr->value<<endl;
        displayInOrder(nodePtr->right);
    }
}

void IntBinaryTree::displayPreOrder(TreeNode* nodePtr) const
{
    if(nodePtr)
    {
        cout<<nodePtr->value<<endl;
        displayPreOrder(nodePtr->left);
        displayPreOrder(nodePtr->right);
    }
}

void IntBinaryTree::displayPostOrder(TreeNode* nodePtr) const
{
    if(nodePtr)
    {
        displayPostOrder(nodePtr->left);
        displayPostOrder(nodePtr->right);
        cout<<nodePtr->value<<endl;
    }
}

bool IntBinaryTree::searchNode(int num)
{
    TreeNode* nodePtr = root;
    while(nodePtr)
    {
        if(nodePtr->value == num)
        {
            return true;
        }
        else if( num < nodePtr->value)
        {
            nodePtr = nodePtr->left;
        }
        else
        {
            nodePtr = nodePtr->right;
        }
    }
    return false;
}


//DELETION

void IntBinaryTree::remove(int num)
{
    deleteNode(num, root);
}

void IntBinaryTree::deleteNode(int num, TreeNode* &nodePtr)
{
    if(num < nodePtr->value)
    {
        deleteNode(num, nodePtr->left);
    }
    else if(num > nodePtr->value)
    {
        deleteNode(num, nodePtr->right);
    }
    else
    {
        makeDeletion(nodePtr);
    }
    
}

void IntBinaryTree::makeDeletion(TreeNode* &nodePtr)
{
    //Define a temporary pointer to use in reattaching left subtree.
    TreeNode* tempNodePtr;

    if(nodePtr == NULL)
    {
        cout<<"Cannot delete empty node.\n";
    }
    else if(nodePtr->right == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->left;
        delete tempNodePtr;
    }
    else if(nodePtr->left == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->right;
        delete tempNodePtr;
    }
    else
    {
        tempNodePtr = nodePtr->right;
        while(tempNodePtr->left)
        {
            tempNodePtr = tempNodePtr->left;
            tempNodePtr->left = nodePtr->left;
            tempNodePtr = nodePtr;
            nodePtr = nodePtr->right;
            delete tempNodePtr;
        }
    }
    

}