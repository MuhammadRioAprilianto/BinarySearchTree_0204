#include <iostream>
using namespace std;

class Node
{
    public:
        int info;
        Node *leftchild;
        Node *rightchild;

        Node()
        {
            leftchild = nullptr;
            rightchild = nullptr;
        }
};

class BinaryTree
{
    public:
        Node *ROOT;

        BinaryTree()
        {
            ROOT = nullptr;
        }

    void insert()
    {
        int x;
        cout << "Masukkan Nilai: ";
        cin >> x;

        Node *newNode = new Node(); //mengalokasikan memory untuk node baru
        newNode->info = x; //Assign value to the data field of new Node
        //Make the left and right child of the new node point to null
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;
        //Locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);
    }
};