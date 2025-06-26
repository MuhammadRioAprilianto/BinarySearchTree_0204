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
        
    }
};