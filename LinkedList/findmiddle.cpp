#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next=NULL;
    }

};
Node* findmiddle(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    
    while(fast != NULL && fast->next != NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(70);
    Node* mid = findmiddle(head);
    if(mid != NULL) {
        cout << "Middle node: " << mid->data << endl;
    }
    return 0;
}