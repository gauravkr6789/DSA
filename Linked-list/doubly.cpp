#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*prev;
		Node*next;
		
		Node(int data){
			this->data=data;
			prev=NULL;
			next=NULL;
		}
		
		~Node(){
			int val=this->data;
			
			while(this->next != NULL){
				delete next;
				this->next=NULL;
				
			}
			cout<<"memory free of : "<<val<<" ";
		}
		
		void print(Node*head){
			Node*temp=head;
			while(temp->next != NULL){
				cout<<temp->data;
				temp=temp->next;
			}
		}
		
		void insertAtfront(Node*head,int data){
			if(head == NULL){
				Node*temp=new Node(data);
				head=temp;
			}
			Node*temp=new Node(data);
			temp->next=head;
			head->prev=temp;
			head=temp;
		}
};

int main(){
	Node*node1=new Node(12);
	Node*head=NULL;
	node1->insertAtfront(head,13);
	node1->print(head);
}
