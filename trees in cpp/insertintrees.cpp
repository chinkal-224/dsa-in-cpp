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
void insert(Node* root,int key){
    if(key<root->data){
        if(root->left==NULL){
            root->left=new Node(key);
        }
        else{
            insert(root->left,key);
        }
    }
    else{
        if(root->right==NULL){
            root->right=new Node(key);
        }
        else{
            insert(root->right,key);
        }
    }
}
Node* inorder(Node* root){
    if(root==NULL){
        return NULL;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return root;
}
int main(){
    Node* root=new Node(50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);
    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<endl;
    return 0;
}