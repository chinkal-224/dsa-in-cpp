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
    bool find(Node* root,int key){
        if(root==NULL){
            return false;
        }
        if(root->data==key){
            return true;
        }
        if(key<root->data){
            return find(root->left,key);
        }
        else{
            return find(root->right,key);
        }
    }
    void inorder(Node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};
int main(){
    Node* root=new Node(50);
    root->left=new Node(30);
    root->right=new Node(70);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    cout<<"Inorder Traversal: ";
    root->inorder(root);
    cout<<endl;
    int key=60;
    int key2=25;
    if(root->find(root,key)){
        cout<<"Element "<<key<<" found in the BST."<<endl;
    }
    else{
        cout<<"Element "<<key<<" not found in the BST."<<endl;
    }
    if(root->find(root,key2)){
        cout<<"Element "<<key2<<" found in the BST."<<endl;
    }
    else{
        cout<<"Element "<<key2<<" not found in the BST."<<endl;
    }
    return 0;
}