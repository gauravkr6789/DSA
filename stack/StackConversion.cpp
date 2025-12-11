/*#include<iostream>
using namespace std;
#define max 1000
class stack{
int top;
public:
int arr[max];
stack(){
    top=-1;
}
bool push(int x){
    if(top >= max-1){
        cout<<"stack overflow"<<endl;
        return false;
    }
    else{
        arr[top]=x;
        top++;
        cout<<"inserted element "<<x<<endl;
        return true;
    }
}

bool pop(){
    if(top < 0){
        cout<<"stack underflow"<<endl;
        return false;
    }
    else{
        int x=arr[top];
        top--;
        cout<<"deleted element "<<arr[top]<<endl;
        return true;
    }
}
bool isEmpty(){
    if(top < 0){
        return true;
    }
    else{
        return false;
    }
}
bool peek(){
    if(top<0){
        cout<<"stack is empty"<<endl;
        return false;
    }
    else{
        cout<<"Top element is "<<arr[top]<<endl;
        return true;
    }
}
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.isEmpty();
    s.peek();
    return 0;
}*/

// infix to postfix


