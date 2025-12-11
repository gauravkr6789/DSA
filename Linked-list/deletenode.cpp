#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    Node *deleteAtFront(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *deleteAtPosition(Node *&head, int position)
    {
        Node *prev;
        Node *temp = head;
        if (head == NULL || position < 1)
        {
            return head;
        }
        if (position == 1)
        {
            head = head->next;
            return head;
        }
        for (int i = 0; i < position; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp != NULL)
        {
            prev->next = temp->next;
            delete temp;
            return head;
        }
        return head;
    }
    Node *deleteAtLast(Node *head)
    {
        
        if (head == nullptr)
        {
            return nullptr;
        }

       
        if (head->next == nullptr)
        {
            delete head;
            return nullptr;
        }

        // Find the second last node
        Node *second_last = head;
        while (second_last->next->next != nullptr)
        {
            second_last = second_last->next;
        }

        // Delete the last node
        delete second_last->next;

        // Change next of second last
        second_last->next = nullptr;

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
    cout << endl
         << "after deleting node : " << " ";
    head = head->deleteAtLast(head);
    head->Print(head);
    return 0;
}