#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node*prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev=NULL;
    }
    void deleteNodeAthead(Node*&head){
        if(head == NULL){
            return;
        }
        Node*temp=head;
        if(temp != NULL){
            head = head->next;
            head->prev=NULL;
            delete temp;
            temp=NULL;
           
        }
    }

    Node*deleteAtafter(Node*&head ,int key){
        Node*curr=head;
        while(curr != NULL){
            if(curr->data == key){
                break;
            }
          curr = curr->next;
        }
        if(curr == NULL || curr->next==NULL){
            return head;
        }
        Node*deletenode=curr->next;
       
        curr->next=deletenode->next;
        if(deletenode->next != NULL){
            deletenode->next->prev=curr;
        }
        delete deletenode;
        return head;
    }
    Node*deleteAtbefore(Node*&head ,int key){
        Node*curr=head;
        while(curr != NULL){
            if(curr->data == key){
                break;
            }
          curr = curr->next;
        }
        if(curr == NULL || curr->prev==NULL){
            return head;
        }
        Node*deletenode=curr->prev;
       
        curr->prev=deletenode->prev;
        if(deletenode->prev != NULL){
            deletenode->prev->next=curr;
        }
        else{
            head=curr;
        }
        delete deletenode;
        return head;
    }
   
   void Print(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    cout << "before deleting node : " << " ";
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->Print(head);
    head->deleteAtbefore(head,2);
   
    cout << endl << "after deleting node at head : " << " ";
    head->Print(head);
    
    return 0;
}