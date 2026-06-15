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

Node* detectloop(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move slow pointer by 1 step
        fast = fast->next->next;    // Move fast pointer by 2 steps
        
        // Check for meeting point AFTER moving pointers
        if (slow == fast) {
            cout << "loop found" << endl;
            return slow; 
        }
    }
    
    cout << "loop not detected" << endl;
    return NULL;
}

int main() {
    // Creating nodes using the structural constructor
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    // Creating a self-loop at the last node (40 points to itself)
    head->next->next->next->next = head->next->next;
    
    // Run loop detection
    detectloop(head);

    return 0;
}
