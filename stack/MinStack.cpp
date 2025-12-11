#include <iostream>
#include <limits.h>
#include <stack>
using namespace std;
class SpecialStack
{
    stack<int> s;
    int min = INT_MAX;

public:
void Push(int data){
    if(s.empty()){
        s.push(data);
        min=data;
    }
    else{
        if(data < min){
            s.push(2*data-min);
            min=data;
        }
        else{
            s.push(data);
        }
    }
}

int Pop(){
    if(s.empty()){
        return -1;
    }
    int curr=s.top();
    s.pop();
    if(curr > min){
        return curr;
    }
    else{
        int premin=min;
        int val=2*min-curr;
        min =val;
        return premin;
    }
}
int Top(){
    if(s.empty()){
        return -1;
    }
    int curr=s.top();
    if(curr < min){
          return min;
    }
    else{
        return curr;
    }
}
int getmin(){
    if(s.empty()){
        return -1;
    }
    return min;
}
};
int main(){
    SpecialStack s;
    s.Push(10);
    s.Push(5);
    s.Push(2);
    s.Push(11);
    s.Push(18);
    s.Pop();
    s.Pop();
    s.Top();
    int result=s.getmin();
    cout<<result;

}
