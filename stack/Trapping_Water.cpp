#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>NextGreaterElement(int arr[],int n){
    stack<int>s;
    vector<int>ans(n,-1);
    for(int idx=n-1;idx>=0;idx--){
        int currentElement=arr[idx];
        while(!s.empty()&& s.top()< currentElement){
            s.pop();
        }
        if(!s.empty()){
            ans[idx]=s.top();
        }
        s.push(currentElement);
    }
    return ans;
}

vector<int>PrevGreaterElement(int arr[],int n){
    stack<int>s;
    vector<int>ans(n,-1);
    for(int idx=0;idx<n;idx++){
        int currentElement=arr[idx];
        while(!s.empty()&& s.top()> currentElement){
            s.pop();
        }
        if(!s.empty()){
            ans[idx]=s.top();
        }
        s.push(currentElement);
    }
    return ans;
}

int TrapWater(int arr[],int n){
    vector<int>PrevMax(n,0);

    vector<int>NextMax(n,0);

    


}

