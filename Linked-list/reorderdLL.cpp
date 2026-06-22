#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

node* middleNode(node *&head)
{
    node *slowptr = head;
    node *fastptr = head;
    while (fastptr && fastptr->next)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    return slowptr;
}

node *mergeLL(node *l1, node *l2)
{
    node *dummyNode = new node(-1);
    node *tail = dummyNode;

    node *head1 = l1;
    node *head2 = l2;

    while (head1 && head2)
    {
        tail->next=head1;
        head1=head1->next;
        tail=tail->next;

        tail->next=head2;
        head2=head2->next;
        tail=tail->next;
    }

    if (head1)
        tail->next = head1;
    if (head2)
        tail->next = head2;

    return dummyNode->next;
}

node *reverse(node *head)
{

   node*middle=middleNode(head);
    node *prev = middle;
    node *curr = middle->next;
    node *forward = middle;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node*reorderLL(node*head){
    
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    
    node*middle =middleNode(head);
    //cout<<" middle node : "<<middle->data;

    node *rev = reverse(middle->next);
    print(rev);
}
