#include<iostream>
using namespace std;
class Stack{
    int top,cap;
    int *Array;
    public:
    Stack(int cap) { 
        this->cap = cap; 
        top = -1; 
        Array = new int[cap]; 
    } 
    ~Stack() { 
        delete[] Array; 
    } 
    bool push(int x){
        if(top >= cap-1){
            cout<<"stack overflow"<<endl;
            return false;
        }
        Array[++top]=x;
        return true;
    }

    int pop(){
        if(top < 0){
            cout<<"stack underflow "<<endl;
            return 0;
        }
        return Array[top--];
    }
     int peek() { 
        if (top < 0) { 
            cout << "Stack is Empty\n"; 
            return 0; 
        } 
        return Array[top]; 
    } 

    bool isEmpty() { 
        return top < 0; 
    } 
}; 

int main() { 
    Stack s(5); 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout<<s.pop()<< " popped from stack\n"; 

    cout << "Top element is: " << s.peek() << endl; 

    cout << "Elements present in stack: "; 
    while (!s.isEmpty()) { 
        cout << s.peek() << " "; 
        s.pop(); 
    } 

    return 0; 
}

