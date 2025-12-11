#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* reverseLL(node*& head) {
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;

    while (curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

node* Add(node*& head1, node*& head2) {
    node* first = reverseLL(head1);
    node* second = reverseLL(head2);

    node* dummyNode = new node(-1);
    node* tail = dummyNode;

    int carry = 0;

   
    while (first != NULL || second != NULL || carry != 0) {
        int val1 = 0, val2 = 0;

        if (first != NULL) {
            val1 = first->data;
            first = first->next;
        }
        if (second != NULL) {
            val2 = second->data;
            second = second->next;
        }

        int sum = val1 + val2 + carry;
        int digit = sum % 10;
        carry = sum / 10;

        tail->next = new node(digit);
        tail = tail->next;
    }

    node* ans = dummyNode->next;
    ans = reverseLL(ans);
    return ans;
}

int main() {
    
    node* head1 = new node(2);
    head1->next = new node(4);
    head1->next->next = new node(3); 

    node* head2 = new node(5);
    head2->next = new node(6);
    head2->next->next = new node(4); 

    node* ans = Add(head1, head2);   
    print(ans);
}
