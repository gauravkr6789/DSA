#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void insertAtbottom(stack<int>&s,int number){
    if(s.empty()){
        s.push(number);
        return;
    }
    int topElement=s.top();
    s.pop();
    insertAtbottom(s,number);
    s.push(topElement);
}

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int top=s.top();
    s.pop();
    reverseStack(s);
    insertAtbottom(s,top);

}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int>st;
    for(int i=0;i<5;i++){
        st.push(i);
        
    }
    print(st);
    reverseStack(st);
    print(st);

}