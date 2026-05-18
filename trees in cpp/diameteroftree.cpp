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

int diameter(Node* root, int &height)
{
    if(root == NULL)
    {
        height = 0;
        return 0;
    }

    int leftHeight = 0;
    int rightHeight = 0;

    int leftDiameter = diameter(root->left, leftHeight);
    int rightDiameter = diameter(root->right, rightHeight);

    height = max(leftHeight, rightHeight) + 1;

    int currentDiameter = leftHeight + rightHeight + 1;

    return max(currentDiameter,
           max(leftDiameter, rightDiameter));
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int height = 0;

    cout << "Diameter = "
         << diameter(root, height);

    return 0;
}