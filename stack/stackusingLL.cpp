#include <iostream>
#include <climits>
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
class Stack
{
    node *head;

public:
    Stack()
    {
        this->head = NULL;
    }
    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        node *newnode = new node(data);
        if (!newnode)
        {
            cout << "stack overflow " << endl;
        }
        newnode->next = head;
        head = newnode;
    }

    void pop()
    {
        if (this->isEmpty())
        {
            cout << "stack underflow " << endl;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }
    int peek()
    {
        if (!isEmpty())
            return head->data;
        else
        {
            cout << "\nStack is empty";
            return INT_MIN;
        }
    }
};
int main()
{
    Stack st;

    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);

    cout << "Top element is " << st.peek() << endl;

    cout << "Removing two elements..." << endl;
    st.pop();
    st.pop();

    cout << "Top element is " << st.peek() << endl;

    return 0;
}
