#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;

    while(curr!=NULL){
        next = curr->next;  
        curr->next = prev;  
        prev = curr;
        curr = next;
    }
    head=prev;
}

void insertTail(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) { head = newNode; return; }
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertTail(head, 5);

    cout << "Before: "; print(head);
    reverse(head);
    cout << "After:  "; print(head);

    return 0;
}