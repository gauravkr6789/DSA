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

    void insertAtFront(node*&head,int data){
        if(head == NULL){
           node*temp=new node(data);
           head=temp;
        }
        
        node*temp=new node(data);
        temp->next=head;
        head=temp;
    }
    void insertAtBack(node*&head,int data){
        if(head == NULL){
            node*temp=new node(data);
            head=temp;
            
        }
        node*temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        node*newNode=new node(data);
        temp->next=newNode;
    }

    void insertAtPosition(node*&head,int position,int data){
    	if(position == 1){
    		insertAtFront(head,data);
    		return;
		}
		int count=1;
		node*temp=head;
		while(count<position+1){
			temp=temp->next;
            count++;
		}
		node*newnode=new node(data);
		newnode->next=temp->next;
		temp->next=newnode;
        temp=newnode;
		
		if(temp == NULL){
			insertAtBack(head,data);
			return;
		}
		
    }

    void print(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    node*head=new node(10);
    head->insertAtFront(head,20);
    head->insertAtFront(head,30);
    head->insertAtBack(head,40);
    head->insertAtPosition(head,2,50);
    cout<<"Linked List: ";
    head->print(head);
   
    return 0;
 
}
