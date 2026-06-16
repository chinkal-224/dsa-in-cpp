#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* merge(Node* head1, Node* head2)
{
    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
        }

        tail = tail->next;
    }

    if(head1 != NULL)
        tail->next = head1;

    if(head2 != NULL)
        tail->next = head2;

    return dummy->next;
}

void display(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    // First Sorted List
    Node* head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);

    // Second Sorted List
    Node* head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);

    cout << "List 1: ";
    display(head1);

    cout << "List 2: ";
    display(head2);

    Node* mergedHead = merge(head1, head2);

    cout << "Merged List: ";
    display(mergedHead);

    return 0;
}