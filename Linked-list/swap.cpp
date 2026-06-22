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

void swapNode(node*&firstNode,node*&secondNode){
    node*tempNode=firstNode;
    cout<<endl<<"tempNode :"<<tempNode->data<<endl;
    firstNode->next=secondNode;
    cout<<endl<<"firstNode :"<<firstNode->data<<endl;
    secondNode->next=firstNode;
    cout<<endl<<"secondNode :"<<secondNode->data<<endl;
}

void print(node*head){
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head=new node(10);
    head->next=new node(20);
    cout<<"oringinal head : ";
    print(head);
    cout<<endl<<"swap node : ";
    swapNode(head,head->next);
    print(head);

}