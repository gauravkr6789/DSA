/*#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node*next;

	Node(int d){
			data=d;
			next=NULL;
	}
};

Node*reverseLinkedlist(Node*head){
	Node*prev=NULL;
	Node*curr=head;
	Node*forward;
	while(curr != NULL){
		   forward=curr->next;
	       curr->next=prev;
	       prev=curr;
	       curr=forward;
	}
	return prev;
}

void print(Node*head){
	while(head != NULL){
		cout<<head->data<<"-> ";
		head=head->next;
	}
}
int main(){
	Node*node1=new Node(10);
	Node*head=node1;
	head->next=new Node(11);
	head->next->next=new Node(12);
	head->next->next->next=new Node(13);
	cout<<"linked-list :";
	print(head);
	cout<<endl<<"reverse linked-list :";
	head=reverseLinkedlist(head);
	print(head);
}*/


// recursive approach to reverse linked list


/*#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node(int data){
		this->data=data;
        next=NULL;
	}
	node*reverseLL(node*head){
		node*prev=NULL;
		node*curr=head;
		node*forward=curr->next;;
		if(curr == NULL){
			return NULL;
		}
		if(curr->next == NULL){
			return head;
		}
		node*reverse=reverseLL(forward);
		forward->next=curr;
	    curr->next=prev;
		return reverse
	}
};
int main(){
	node*head=new node(10);
    head->next=new node(11);
    head->next->next=new node(12);
    head->next->next->next=new node(13);
    cout<<"Linked-list :";
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<endl<<"reverse linked-list :";
    head=head->reverseLL(head);
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    return 0;
}*/



















