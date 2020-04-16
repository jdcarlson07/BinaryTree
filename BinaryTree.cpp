#include "BinaryTree.hpp"
#include "iostream"
using namespace std;
BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this->rightChild = 0;
}

void BinaryTree::displayInOrder()
{
    if(leftChild)
    {
        leftChild->displayInOrder();
    }

    cout<< to_string(payload) + "\n";

    if(rightChild)
    {
        rightChild->displayInOrder();
    }
}
        
void BinaryTree::displayPreOrder()
{
    cout<< to_string(payload) + "\n";

    if(leftChild)
    {
        leftChild->displayInOrder();
    }

    if(rightChild)
    {
        rightChild->displayInOrder();
    }
}

void BinaryTree::displayPostOrder()
{
    if(leftChild)
    {
        leftChild->displayInOrder();
    }

    if(rightChild)
    {
        rightChild->displayInOrder();
    }

    cout<< to_string(payload) + "\n";
}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        //should go to my left
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        //should go to my right
        if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        } 
    } 
}