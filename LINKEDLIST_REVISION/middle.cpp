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
int length(Node*head){
    int count=0;
    Node*temp=head;
    while(temp != NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
Node* getmiddle(Node*head){
    int len=length(head);
    
    Node*temp=head;
    for(int i=0;i<len/2;i++){
        temp=temp->next;
    }
    return temp;
}
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    cout<<"Length of the list is: "<<length(head)<<endl;
    Node*mid=getmiddle(head);
    cout<<"middle element is :"<<mid->data<<endl;
    print(head);
    return 0;
}*/

#include<iostream>
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
/*Node*getMiddle(Node*node){
    if(node == NULL || node->next == NULL){
        return node;
    }
    Node*slow=node;
    Node*fast=node;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    Node*mid=getMiddle(head);
    cout<<"middle element is :"<<mid->data<<endl;
    return 0;
}*/