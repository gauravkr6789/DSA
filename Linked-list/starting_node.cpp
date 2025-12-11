#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    
    // Constructor
    node(int x) {
        data = x;
        next = NULL;
    }

    // Function to detect the intersection point (Floyd's Cycle Detection)
     node* Intersectionpoint(node* head) {
        if (head == NULL) {
            return NULL;
        }
        
        node* slow = head;
        node* fast = head;
        
        // Traverse the list with slow and fast pointers
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            
            // If they meet, there is a cycle
            if (slow == fast) {
                return slow; // Intersection point
            }
        }
        return NULL; // No cycle
    }

    // Function to find the starting node of the cycle
     node* getStartingNode(node* head) {
        if (head == NULL) {
            return NULL;
        }
        
        node* fast = Intersectionpoint(head); // Detect intersection point
        node* slow = head;

        if (fast == NULL) {
            return NULL; // No cycle detected
        }
        
        // Move both slow and fast pointers one step at a time
        // They will meet at the starting point of the cycle
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow; // Cycle's starting node
    }
    node*removeLoop(node*head){
        if(head == NULL){
            return NULL;
        }
        node*startingnode=getStartingNode(head);
        if(startingnode == NULL){
            return head;
        }
        node*temp=startingnode;
        while(temp->next !=startingnode){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};

int main() {
    // Creating a linked list with some nodes
    node* head1 = new node(1);
    head1->next = new node(2);
    head1->next->next = new node(3);
    head1->next->next->next = new node(4);
    head1->next->next->next->next = new node(5);
    head1->next->next->next->next->next = new node(6);
    head1->next->next->next->next->next->next = new node(7);
    head1->next->next->next->next->next->next->next = new node(8);

    // Create a cycle for testing: node 8 points back to node 4
    head1->next->next->next->next->next->next->next->next = head1->next->next->next;

    // Detect starting node of cycle
    node* head=head1->getStartingNode(head1);
    
    if (head != NULL) {
        cout << "Starting point of the cycle is: " << head->data << endl;
    } else {
        cout << "No cycle detected in the list." << endl;
    }

    return 0;
}
