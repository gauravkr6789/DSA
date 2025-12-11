#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
    node*dublicate(node*head){
    	if(head == NULL){
    		return head;
		}
		node*curr=head;
		
		while(curr->next!= NULL){
			node*temp=curr->next;
			if(curr->data == temp->data){
				curr->next=temp->next;
				curr->next=NULL;
				delete curr->next;
				
			}
			curr=curr->next;
			
		}
        cout<<head->data<<"  ";

    }
    void print(node*& head){
    	node*temp=head;
    	while(temp !=NULL){
    		cout<<temp->data<<"->";
    		temp=temp->next;
		}
	}
};
int main(){
	node*head=new node(10);
	head->next=new node(11);
	head->next->next=new node(11);
	head->next->next->next=new node(12);
	head->next->next->next->next=new node(13);
	cout<<"Linked list are : "<<endl;
	head->print(head);
	cout<<endl;
	cout<<"after removing dublicate Linked list : ";
	head->dublicate(head);
	head->print(head);
	return 0;
}
