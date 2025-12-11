/*#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insertAtHead(Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

int length(Node *head)
{
    int lengthCount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        lengthCount++;
        temp = temp->next;
    }
    return lengthCount;
}

Node *Find_Nth_Node_From_End(Node *head, int k)
{
    int len = length(head);

    if (k > len || k <= 0)
    {
        cout << "Invalid value of k" << endl;
        return NULL;
    }

    int targetPos = len - k; // 0-based index
    Node *temp = head;

    while (targetPos > 0 && temp != NULL)
    {
        temp = temp->next;
        targetPos--;
    }

    return temp; // This is the k-th node from the end
}

int main()
{
    Node *head = NULL;

    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);

    print(head); // Output: 30 20 10

    int k = 1;
    Node *result = Find_Nth_Node_From_End(head, k);

    if (result != NULL)
    {
        cout << k << "-th Node from end is: " << result->data << endl;
    }

    return 0;
}
*/