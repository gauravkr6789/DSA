#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void printList(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* reverseKthLL(node* head, int k) {
    if (head == NULL) return NULL;

    node* current = head;
    node* temp = NULL;
    int count = 0;

    // Reverse first k nodes
    while (current != NULL && count < k) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
        count++;
    }

    // temp is now at (k+1)th node, current is NULL or next segment head
    if (temp != NULL)
        head = temp->prev; // new head of this reversed part

    // Recur for the rest of the list
    if (current != NULL) {
        node* rest = reverseKthLL(current, k);
        head->next = rest;
        if (rest != NULL)
            rest->prev = head;
    }

    return head;
}

int main() {
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    node* fifth = new node(5);

    // Connect nodes
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;

    cout << "Original list:\n";
    printList(head);

    head = reverseKthLL(head, 2);  // Reverse in groups of 2

    cout << "Reversed in groups of 2:\n";
    printList(head);

    return 0;
}
