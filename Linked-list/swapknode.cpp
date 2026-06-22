#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*nextptr;
    node(int data){
        this->data=data;
        nextptr =NULL;
    }
};

void print(node*head){
    node*temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->nextptr;
    }
}

int length(node*head){
    int len=0;
    node*temp=head;
    while(temp != NULL){
        len++;
        temp=temp->nextptr;
    }
    return len;
}

node*swapKnode(node*head,int k){
    int n=length(head);
    node* prev1 = NULL;
    node* curr1 = head;
    for (int i = 1; i < k; i++) {
        prev1 = curr1;
        curr1 = curr1->nextptr;
    }

    node* prev2 = NULL;
    node* curr2 = head;
    for (int i = 1; i < n - k + 1; i++) {
        prev2 = curr2;
        curr2 = curr2->nextptr;
    }
  

   // fix prev1
   if(prev1){
    prev1->nextptr=curr2;
   }
   else{
    head=curr2;
   }
 
   // fix prev2
   if(prev2){
    prev2->nextptr=curr1;
   }
   else{
    head=curr1;
   }
 
// swap node 
   node* tempNext = curr1->nextptr;
   curr1->nextptr = curr2->nextptr;
   curr2->nextptr = tempNext;

   return head;
}

int main(){
    node*head=new node(10);
    head->nextptr=new node(20);
    head->nextptr->nextptr=new node(30);
    head->nextptr->nextptr->nextptr=new node(40);
    head->nextptr->nextptr->nextptr->nextptr=new node(50);
    
    node*swap=swapKnode(head,2);
    print(swap);

    

}
