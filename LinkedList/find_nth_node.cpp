#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
//brute force O(N)+O(N) LENGTH-N
// Find Nth node from the end (Two Pointer Approach)  O(N)
Node* findNthnode(Node* head, int n) {
    if (head == NULL) {
        return NULL;
    }

    Node* first = head;
    Node* second = head;

    for (int i = 0; i < n; i++) {
        if (first == NULL) {
            return NULL; // n greater than length
        }
        first = first->next;
    }

    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    return second;
}

// Insert node at end
void insertatend(Node*& head, int n) {
    Node* newnode = new Node(n);

    if (head == NULL) {
        head = newnode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertatend(head, 10);
    insertatend(head, 20);
    insertatend(head, 30);
    insertatend(head, 40);
    insertatend(head, 50);

    cout << "Linked List: ";
    display(head);

    int n = 2;

    Node* ans = findNthnode(head, n);

    if (ans != NULL) {
        cout << n << "th node from the end is: "
             << ans->data << endl;
    } else {
        cout << "Invalid value of n" << endl;
    }

    return 0;
}