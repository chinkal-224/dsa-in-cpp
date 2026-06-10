#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() : data(0), next(NULL) {}
    Node(int val) : data(val), next(NULL) {}

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtPosition(Node* &head, int val, int pos) {

    // Position 1 means insert at beginning
    if(pos == 1) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Move to (pos-1)th node
    for(int i = 1; i < pos - 1; i++) {

        if(temp == NULL) {
            cout << "Invalid Position" << endl;
            return;
        }

        temp = temp->next;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);

    cout << "Before Insertion:" << endl;
    display(head);

    insertAtPosition(head, 30, 3);

    cout << "After Insertion:" << endl;
    display(head);

    return 0;
}