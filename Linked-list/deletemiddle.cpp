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
    int getmiddle(node*head){
        node*slow=head;
        node*fast=head;
        while(fast !=NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
    node*removeMiddle(node*head){
        if(head == NULL && head->next != NULL){
            return NULL;
        }
        int middle=getmiddle(head);
        node*curr=head;
        while(curr !=NULL){
            if(curr->data == middle){
                break;
            }
            curr=curr->next;
        }
        return head;
    }
    
};
int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    cout<<"oringinal list : ";
    while(head != NULL){
        cout<<head->data<<"-> ";
        head=head->next;
        if(head == NULL){
            cout<<"NULL";
            break;
        }
    }
    head->removeMiddle(head);
    cout<<"after remove middle  linked list :"<<head;
    return 0;
}