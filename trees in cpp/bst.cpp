#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int value)
{
    if(root == NULL)
    {
        return new Node(value);
    }

    if(value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

int main()
{
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 2);
    root = insert(root, 7);

    inorder(root);

    return 0;
}