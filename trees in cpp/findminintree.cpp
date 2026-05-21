#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* findmin(Node* root){
    if(root==NULL){
        return NULL;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
int main(){
    Node* root=new Node(50);
    root->left=new Node(30);
    root->right=new Node(70);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    Node* minNode=findmin(root);
    if(minNode!=NULL){
        cout<<"Minimum element in the BST is: "<<minNode->data<<endl;
    }
    else{
        cout<<"The tree is empty."<<endl;
    }
    return 0;
}