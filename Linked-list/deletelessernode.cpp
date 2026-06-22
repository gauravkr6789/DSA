#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node*reverseLinkedlist(node*head){
	node*prev=NULL;
	node*curr=head;
	node*forward;
	while(curr != NULL){
		   forward=curr->next;
	       curr->next=prev;
	       prev=curr;
	       curr=forward;
	}
	return prev;
}
node* deleteNode(node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    // Step 1: Reverse
    head = reverseLinkedlist(head);

    node* curr = head;
    int maxVal = curr->data;

    while (curr != NULL && curr->next != NULL) {
        if (curr->next->data < maxVal) {
            node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        } else {
            curr = curr->next;
            maxVal = curr->data;
        }
    }


   head = reverseLinkedlist(head);

    return head;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    node*head=new node(10);
    head->next=new node(20);
    node*deletehead=deleteNode(head);
    print(deletehead);
}