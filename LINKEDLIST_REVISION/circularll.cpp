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
    void insertNode(node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        node* newNode = new node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(node* tail) {

    node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

        
};
int main(){
    node*tail=NULL;
    tail->insertNode(tail,1,3);
   
    tail->insertNode(tail,2,5);
    tail->print(tail);
    
return 0;
}