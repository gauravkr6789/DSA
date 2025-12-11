#include <iostream>
using namespace std;
class node
{
public:
    node*prev;
    int data;
    node*next;
    node(int x)
    {
        prev=NULL;
        data = x;
        next = NULL;
    }

    void print(node *head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtFront(node*&head,int data){
        if(head == NULL){
            node*temp=new node(data);
            head=temp;
        }
        node*temp=new node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

    void insertAtBack(node*&head,int data){
        if(head == NULL){
            node*temp=new node(data);
            head=temp;
        }
        node*temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        node*newnode=new node(data);
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    void insertAtPosition(node*&head,int position,int data){
        if(position == 1){
            insertAtFront(head,data);
            return;
        }
        int count=1;
        node*temp=head;
        while(count<=position-1){
            temp=temp->next;
            count++;
        }
        node*newnode=new node(data);
        newnode->next=temp->next;
        if(temp->next!=NULL){
            temp->next->prev=newnode;
        }
        temp->next=newnode;
        newnode->prev=temp;

        if(temp == NULL){
            insertAtBack(head,data);
            return;
        }
    }
};

int main()
{
    node*head=new node(10);
    head->insertAtFront(head,20);
    head->insertAtFront(head,40);
    head->insertAtBack(head,50);
    head->insertAtPosition(head,3,30);
    head->print(head);

    
}