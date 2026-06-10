#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();

    head->data=5;
    head->next=second;

    second->data=15;
    second->next=third;

    third->data=25;
    third->next=fourth;

    fourth->data=35;
    fourth->next=NULL;

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
