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
};
node*reverse(node*head,node*curr,node*next){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node*prev=NULL;
    node*curr=head;
    node*next=NULL;
    while(curr != NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"-> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    cout<<"Original Linked List: ";
    print(head);
    head=reverse(head);
    cout<<"Reversed Linked List: ";
    print(head);
    return 0;
}