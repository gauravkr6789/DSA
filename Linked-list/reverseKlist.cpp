#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *nextptr;
    node(int data)
    {
        this->data = data;
        nextptr = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextptr;
    }
}

int length(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->nextptr;
    }
    return len;
}

node *reversekth(node *head, int k)
{
    int len=length(head);
    int count = 0;
    if(len-count < k){
        return head;
    }
    node *prev = NULL;
    node *curr = head;
    node *next = head;
    
    
    while (curr != NULL && count < k)
    {
        next = curr->nextptr;
        curr->nextptr = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next)
    {
        head->nextptr = reversekth(next, k);
    }
    return prev;
}

int main()
{
    node *head = new node(10);
    head->nextptr = new node(20);
    head->nextptr->nextptr = new node(30);
    head->nextptr->nextptr->nextptr = new node(40);
    head->nextptr->nextptr->nextptr->nextptr = new node(50);

    node *res = reversekth(head, 3);
    print(res);
}
