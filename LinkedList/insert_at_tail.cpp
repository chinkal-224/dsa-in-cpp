#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;

    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(Node* &head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newnode;
}
int main(){
    Node* newnode=new Node(1);
    Node* head=newnode;
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}