#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data =val;
        next=NULL;
    }
};
void deletehead(Node* &head){
    if(head==NULL){
        return;
    }
    Node* todelete=head;
    head=head->next;
    delete todelete;
}
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    deletehead(head);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}