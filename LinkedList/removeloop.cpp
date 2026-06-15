#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head)
{
    if(head == NULL) return;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            slow = head;

            while(slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            Node* temp = slow;

            while(temp->next != slow)
            {
                temp = temp->next;
            }

            temp->next = NULL;
            return;
        }
    }
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
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Creating loop: 40 -> 30
    head->next->next->next->next = head->next->next;

    removeLoop(head);

    cout << "Linked List after removing loop:" << endl;
    display(head);

    return 0;
}