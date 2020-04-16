#include "iostream"
#include "BinaryTree.hpp"

using namespace std;

int main()
{
     BinaryTree* theTree = new BinaryTree(5);
     theTree->add(3);
     theTree->add(3);
     theTree->add(2);
     theTree->add(5);
     theTree->add(7);
     theTree->add(13);
     theTree->add(90);
     theTree->add(17);
     theTree->add(111);
     theTree->displayInOrder();
     cout<<"\n";
     theTree->displayPreOrder();
     cout<<"\n";
     theTree->displayPostOrder();

}