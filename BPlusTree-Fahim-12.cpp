#include <climits>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
int nodeNumber = 3;

class Node
{

public:

    Node **pointer;
    int *key, size;
    bool checkIfLeaf;
    friend class BPlusTree;

    Node()
    {
        key = new int[nodeNumber];
        pointer = new Node *[nodeNumber + 1];
    };
};

Node *searchLeafNode(Node *root, int x);

class BPlusTree
{
    Node *root;

    void insertNodeInsideTree(int dataValue, Node *pointer, Node *child)
    {

        if (pointer->size < nodeNumber)
        {
            int i = 0;

            while (dataValue > pointer->key[i] && i < pointer->size)
            {
                i++;
            }


            for (int j = pointer->size; j > i; j--)
            {

                pointer->key[j] = pointer->key[j - 1];
            }

            for (int j = pointer->size + 1; j > i + 1; j--)
            {
                pointer->pointer[j] = pointer->pointer[j - 1];
            }

            pointer->key[i] = dataValue;
            pointer->size++;
            pointer->pointer[i + 1] = child;
        }

        else
        {

            Node *newInternal = new Node;
            int virtualKey[nodeNumber + 1];
            Node *virtualpointer[nodeNumber + 2];


            for (int i = 0; i < nodeNumber; i++)
            {
                virtualKey[i] = pointer->key[i];
            }


            for (int i = 0; i < nodeNumber + 1; i++)
            {
                virtualpointer[i] = pointer->pointer[i];
            }

            int i = 0, j;


            while (dataValue > virtualKey[i] && i < nodeNumber)
            {
                i++;
            }


            for (int j = nodeNumber + 1; j > i; j--)
            {

                virtualKey[j] = virtualKey[j - 1];
            }

            virtualKey[i] = dataValue;


            for (int j = nodeNumber + 2; j > i + 1; j--)
            {
                virtualpointer[j] = virtualpointer[j - 1];
            }

            virtualpointer[i + 1] = child;
            newInternal->checkIfLeaf = false;

            pointer->size = (nodeNumber + 1) / 2;

            newInternal->size = nodeNumber - (nodeNumber + 1) / 2;


            for (i = 0, j = pointer->size + 1;i < newInternal->size;i++, j++)
            {

                newInternal->key[i] = virtualKey[j];
            }

            for (i = 0, j = pointer->size + 1;i < newInternal->size + 1;i++, j++)
            {

                newInternal->pointer[i] = virtualpointer[j];
            }


            if (pointer == root)
            {

                Node *newRoot = new Node;

                newRoot->key[0] = pointer->key[pointer->size];


                newRoot->pointer[0] = pointer;
                newRoot->pointer[1] = newInternal;
                newRoot->checkIfLeaf = false;
                newRoot->size = 1;
                root = newRoot;
            }

            else
            {


                insertNodeInsideTree(pointer->key[pointer->size], findParent(root, pointer), newInternal);
            }
        }
    }

    Node *findParent(Node *pointer, Node *child)
    {
        Node *parent;

        if (pointer->checkIfLeaf || (pointer->pointer[0])->checkIfLeaf)
        {
            return NULL;
        }

        for (int i = 0; i < pointer->size + 1; i++)
        {

            if (pointer->pointer[i] == child)
            {
                parent = pointer;
                return parent;
            }

            else
            {
                parent = findParent(pointer->pointer[i], child);


                if (parent != NULL)
                    return parent;
            }
        }

        return parent;
    }

public:

    BPlusTree()
    {
        root = NULL;
    }

    void search(int dataValue)
    {

        if (root == NULL)
        {
            cout << "Tree is empty\n";
        }

        else
        {

            Node *pointer = root;

            pointer = searchLeafNode(root, dataValue);

            for (int i = 0; i < pointer->size; i++)
            {

                if (pointer->key[i] == dataValue)
                {
                    cout << "Found\n";
                    return;
                }
            }

            cout << "Not found\n";
        }
    }

    void insertNode(int dataValue)
    {
        if (root == NULL)
        {
            root = new Node;
            root->key[0] = dataValue;
            root->checkIfLeaf = true;
            root->size = 1;
        }

        else
        {
            Node *pointer = root;
            Node *parent;

            pointer = searchLeafNode(root, dataValue);

            if (pointer->size < nodeNumber)
            {
                int i = 0;
                while (dataValue > pointer->key[i] && i < pointer->size)
                {
                    i++;
                }

                for (int j = pointer->size; j > i; j--)
                {
                    pointer->key[j] = pointer->key[j - 1];
                }

                pointer->key[i] = dataValue;
                pointer->size++;

                pointer->pointer[pointer->size] = pointer->pointer[pointer->size - 1];
                pointer->pointer[pointer->size - 1] = NULL;
            }

            else
            {

                Node *newLeaf = new Node;

                int virtualNode[nodeNumber + 1];

                for (int i = 0; i < nodeNumber; i++)
                {
                    virtualNode[i] = pointer->key[i];
                }
                int i = 0, j;

                while (dataValue > virtualNode[i] && i < nodeNumber)
                {
                    i++;
                }

                for (int j = nodeNumber + 1; j > i; j--)
                {
                    virtualNode[j] = virtualNode[j - 1];
                }

                virtualNode[i] = dataValue;
                newLeaf->checkIfLeaf = true;

                pointer->size = (nodeNumber + 1) / 2;
                newLeaf->size = nodeNumber + 1 - (nodeNumber + 1) / 2;

                pointer->pointer[pointer->size] = newLeaf;
                newLeaf->pointer[newLeaf->size] = pointer->pointer[nodeNumber];
                pointer->pointer[nodeNumber] = NULL;

                for (i = 0; i < pointer->size; i++)
                {
                    pointer->key[i] = virtualNode[i];
                }

                for (i = 0, j = pointer->size; i < newLeaf->size; i++, j++)
                {
                    newLeaf->key[i] = virtualNode[j];
                }

                if (pointer == root)
                {

                    Node *newRoot = new Node;
                    newRoot->key[0] = newLeaf->key[0];
                    newRoot->pointer[0] = pointer;
                    newRoot->pointer[1] = newLeaf;
                    newRoot->checkIfLeaf = false;
                    newRoot->size = 1;
                    root = newRoot;
                }
                else
                {
                    insertNodeInsideTree(newLeaf->key[0], parent, newLeaf);
                }
            }
        }
    }

    Node *getRoot()
    {
        return root;
    }
};

Node *searchLeafNode(Node *root, int newNodePosition)
{
    Node *pointer = root, *parent;

    while (pointer->checkIfLeaf == false)
    {

        parent = pointer;

        for (int i = 0; i < pointer->size; i++)
        {

            if (newNodePosition < pointer->key[i])
            {
                pointer = pointer->pointer[i];
                break;
            }

            if (i == pointer->size - 1)
            {
                pointer = pointer->pointer[i + 1];
                break;
            }
        }
    }

    return pointer;
}

int main()
{
    BPlusTree node;

    node.insertNode(6);
    node.insertNode(16);
    node.insertNode(26);
    node.insertNode(36);
    node.insertNode(46);

    node.search(16);

    return 0;
}
