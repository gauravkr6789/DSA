#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }

    Node* getmiddle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node *reverse(Node *&head)
    {
      
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
       
        Node *prev = NULL;
        Node *curr = head;
        Node *nextNode;
        while (curr != NULL)
        {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
        return head;
    }

    bool isPalindromeLL(Node*&head){
        if(head == NULL && head->next == NULL){
            return true;
        }
        
        Node*middle=getmiddle(head);
        Node*secondhalf=reverse(middle->next);
        Node*firsthalf=head;
        while(secondhalf != NULL){
            if(firsthalf->data!=secondhalf->data){
                return false;
            }
            firsthalf=firsthalf->next;
            secondhalf=secondhalf->next;
        }
        return true;

        
    }

    void printList(Node *node)
    {
        while (node != NULL)
        {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(1);
    head->reverse(head);
    cout << "Reversed Linked List: ";
    head->printList(head);
    cout<<endl<<"Is Palindrome: "<<head->isPalindromeLL(head);
    return 0;
 
}
