/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void nextGreaterElement(int arr[],int size){
    vector<int>ans(size,-1);
    stack<int>st;
    for(int i=size-1;i>=0;i--){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(arr[i]);

    }

    for(auto i : ans){
        cout<<i<<" ";
    }

}
int main(){
    int arr[]={1,2,3,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    nextGreaterElement(arr,n);
}*/








#include<iostream>
#include<vector>
using namespace std;

void nextgreater(int arr[],int size){
    vector<int>ans(size,-1);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j] > arr[i]){
               ans[i]=arr[j];
               break;
            } 
            
        }

    }


    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int arr[]={1,27,1,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    nextgreater(arr,n);
}














