#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
//Searching in linked list
bool search(Node* head,int key){
    Node* temp=head;
    while(temp != NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//insert at tail of linked list
void inserttail(Node* &head,int val){
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
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

//printing the linked list
void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL\n";
}

//search position
int search_pos(Node* head,int key){
    int pos=0;
    int steps=0;

    while(head!=NULL){
        steps++;

        if(head->data==key){
            cout<<"Found at position : "<<pos<<endl;
            cout<<"Steps taken : "<<steps<<endl;
            return pos;
        }

        head=head->next;
        pos++;
    }

    return -1;
}

int main(){
    Node*head=NULL;
    inserttail(head,5);
    inserttail(head,15);
    inserttail(head,25);
    inserttail(head,35);
    inserttail(head,45);

    print(head);

    cout << search(head, 35) << "\n";
    cout << search(head, 99) << "\n";

    search_pos(head,25);

    return 0;
}