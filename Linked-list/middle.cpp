#include<iostream>

class Node{ 
	public:
		int data;
		Node*next=NULL;
		Node(int data){
			this->data=data;
			next=NULL;
		}
};

void print(Node*head){
	Node*curr=head;
	while(curr != NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

int getlength(Node* head){
	Node*temp=head;
	int  len=0;
	while(temp != NULL){
		temp=temp->next;
		len++;
	}
	return len;
}

int getmiddle(Node* head){
	int length=getlength(head);
	int minIndex=length/2;
	while(minIndex--){
	  head=head->next;
	 
	}
	return head->data;
}

/*int getmiddle(Node* head){
   Node*slow=head;
   Node*fast=head;
   while(fast != NULL && fast->next != NULL){
   	slow=slow->next;
   	fast=fast->next->next;
   }
   return slow->data;
}
int main(){
	Node*node1=new Node(10);
	Node*head=node1;
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head->next->next->next->next->next=new Node(60);
	cout<<"linked-list :";
	print(head);
	getmiddle(head);
	cout <<endl<<"middle of linked list is : " <<getmiddle(head);


}*/
