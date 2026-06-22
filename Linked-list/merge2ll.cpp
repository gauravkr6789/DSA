#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
node *mergeLL(node *l1, node *l2)
{
    node *dummyNode = new node(-1);
    node *tail = dummyNode;

    node *head1 = l1;
    node *head2 = l2;

    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            tail = tail->next;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            tail = tail->next;
            head2 = head2->next;
        }
    }

   
    if (head1)
        tail->next = head1;
    if (head2)
        tail->next = head2;

    return dummyNode->next;
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

int main()
{
    node *l1 = new node(1);
    node *l2 = new node(3);
    node *result = mergeLL(l1, l2);
    print(result);
}