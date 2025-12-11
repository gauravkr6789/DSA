#include<iostream>
#include<stack>
using namespace std;
bool notfind(stack<int>&s,int element){
    for(int i=0;i<s.size();i++){
        if(s.top() == element){
            return false;
        }
    }
    return true;
}

int main(){
    int element=1;
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(2);
    s.push(2);
    s.push(2);
    int result=notfind(s,1);
    cout<<result;

}