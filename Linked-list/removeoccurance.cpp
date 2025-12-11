#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev=NULL;
    node*next=NULL;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }


    
    node*removeAlloccurance(node*head,int key){

        if(head == NULL){
            return NULL;
        }
        node*temp=head;
        
        while(temp != NULL){
            if(temp->data == key){
                if(temp->prev != NULL){
                    temp->prev->next=temp->next;
                }
                if(temp->next!=NULL){
                    temp->next->prev=temp->prev;
                }
                delete temp;
                temp=head;
                
                
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
    head=head->removeAlloccurance(head,2);
    while(head!=NULL){
        cout<<head->data<<"-> ";
        head=head->next;
    }
    return 0;
 
}
/*#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev = NULL;
    node* next = NULL;
    
    node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
    
    node* removeAlloccurance(node* head, int key) {
        if (head == NULL) {
            return NULL;
        }
        
        node* temp = head;
        
        while (temp != NULL) {
            if (temp->data == key) {
                // If the node to be deleted is the head node
                if (temp == head) {
                    head = temp->next;
                    if (head != NULL) {
                        head->prev = NULL;
                    }
                    delete temp;
                    temp = head;
                    continue;
                }
                
                // Adjust previous and next pointers of the neighboring nodes
                if (temp->prev != NULL) {
                    temp->prev->next = temp->next;
                }
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
                
                // Delete the current node
                node* toDelete = temp;
                temp = temp->next;
                delete toDelete;
                continue;
            }
            
            temp = temp->next;
        }
        
        return head;
    }
};

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(2);
    head->next->next->next->next->next = new node(4);
    head->next->next->next->next->next->next = new node(2);
    
    head = head->removeAlloccurance(head, 2);
    
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    return 0;
}*/

