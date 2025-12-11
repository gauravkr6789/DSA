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
    node*removeDublicate(node*head){
        if(head == NULL){
            return NULL;
        }
        node*temp=head;
        while(temp != NULL){
            node*curr=temp;
            while(curr != NULL){
                if(temp->data == curr->data){
                    node*del=curr->next;
                    curr=curr->next;
                    delete del;
                }
                else{
                    curr=curr->next;
                }
            }
            temp=temp->next;
            
        }
        return head;

    }
};

int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(2);
    head->next->next->next=new node(3);
    head->next->next->next->next=new node(2);
    head->next->next->next->next->next=new node(4);
    head->next->next->next->next->next->next=new node(2);
    node*newhead=head->removeDublicate(head);
    while(newhead!=NULL){
        cout<<newhead->data<<"-> ";
        newhead=newhead->next;
    }
    return 0;
 
}
