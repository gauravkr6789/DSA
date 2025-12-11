#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

int lengthOfLL(node *&head)
{
    node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
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

node *deleted_N_nodeFromEnd(node *head, int deleteNodeIndex)
{
    int length = lengthOfLL(head);
    int count = 1;

   
    if (deleteNodeIndex == length) {
        node *toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    
    node *tempHead = head;

    while (count < length - deleteNodeIndex) {
        tempHead = tempHead->next;
        count++;
    }

    node *nodeToDelete = tempHead->next;
    tempHead->next = nodeToDelete->next;
    delete nodeToDelete;

    return head; 
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    cout << "oringinal linked list : ";
    print(head);
    cout << endl
         << "after remove nth node from back:";
    node *result = deleted_N_nodeFromEnd(head, 2);
    print(result);
}