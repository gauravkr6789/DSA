#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* Remove_M_NodeFrom_N(Node* head, int n, int m) {
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL) {
        // Skip n nodes
        for (int i = 0; i < n && current != NULL; i++) {
            prev = current;
            current = current->next;
        }

        // Delete m nodes
        for (int i = 0; i < m && current != NULL; i++) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        // Connect previous part to the next part
        if (prev != NULL)
            prev->next = current;
        else
            head = current;
    }

    return head;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* insertAtHead(Node* head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

int main() {
    Node* head = NULL;
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 40);

    cout << "Original List: ";
    print(head);

    int n = 2, m = 2; // Example: skip 2 nodes, delete next 2 nodes
    head = Remove_M_NodeFrom_N(head, n, m);

    cout << "Modified List after skipping " << n << " and deleting " << m << " nodes repeatedly: ";
    print(head);

    return 0;
}
