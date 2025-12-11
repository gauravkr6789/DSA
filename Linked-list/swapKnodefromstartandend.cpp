#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int countlength(node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

node* swap_knodefrom_start_and_end(node *head, int k) {
    int len = countlength(head);
    if (k > len || k <= 0) return head;

   
    if (2 * k - 1 == len) return head;

    
    node *prev1 = NULL, *curr1 = head;
    for (int i = 1; i < k; i++) {
        prev1 = curr1;
        curr1 = curr1->next;
    }

    
    node *prev2 = NULL, *curr2 = head;
    for (int i = 1; i < len - k + 1; i++) {
        prev2 = curr2;
        curr2 = curr2->next;
    }

   
    if (prev1 != NULL) prev1->next = curr2;
    else head = curr2; 

    if (prev2 != NULL) prev2->next = curr1;
    else head = curr1; 

    
    node *temp = curr1->next;
    curr1->next = curr2->next;
    curr2->next = temp;

    return head;
}

int main() {
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

    cout << "Original list: ";
    printLL(head);

    int k = 2;
    head = swap_knodefrom_start_and_end(head, k);

    cout << "After swapping " << k << "-th node from start and end: ";
    printLL(head);

    return 0;
}
