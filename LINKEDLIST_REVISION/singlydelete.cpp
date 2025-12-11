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
    
    node* deletenode(node*head){
        if(head == NULL){
            return NULL;
        }
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
};
int main(){
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->deletenode(head);
}