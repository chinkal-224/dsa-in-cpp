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

Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* findMin(Node* root){

    while(root->left != NULL){
        root = root->left;
    }

    return root;
}

Node* deleteNode(Node* root,int key){
    if(root==NULL){
        return NULL;
    }

    //SEARCHING
    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteNode(root->right,key);
    }

    //NODE FOUND
    else{

        //CASE I -> NO CHILD
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //CASE II -> ONE CHILD
        else if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //CASE III -> TWO CHILD
        else{
            Node* successor = findMin(root->right);

            root->data = successor->data;

            root->right =deleteNode(root->right,successor->data);

        }
    }
    return root;
}
int main(){

    Node* root = NULL;

    root = insert(root,50);
    root = insert(root,30);
    root = insert(root,70);
    root = insert(root,20);
    root = insert(root,40);
    root = insert(root,60);
    root = insert(root,80);

    cout<<"Before Deletion: ";
    inorder(root);

    cout<<endl;

    root = deleteNode(root,50);

    cout<<"After Deletion: ";
    inorder(root);

    return 0;
}