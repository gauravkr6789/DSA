#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
    node*detectloop(node*&head){
       if(head == NULL){
        return NULL;
       }
       node*slow=head;
       node*fast=head;
       while(fast !=NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast->next != NULL){
            fast->next=NULL;
            cout<<fast->data;
        }
       }
    }

};
int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next=head->next->next;
   
    node*loop=head->detectloop(head);
    
    if(loop){
        cout<<"Loop found at :"<<loop->data<<endl;
    }else{
        cout<<"No loop found"<<endl;
    }
    return 0;
   
}
