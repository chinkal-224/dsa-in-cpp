#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
}