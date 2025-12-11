#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		
		void insertAtend(Node*tail,int data){
			Node*temp=new Node(data);
			tail->next=temp;
			temp->next=tail;
			tail=temp;
		}
		void print(Node*head){
			Node*temp=head;
			while(temp != NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};
int main(){
	Node*node1=new Node(10);
	Node*tail=node1;
	node1->insertAtend(tail,20);
	node1->print(tail);
}
