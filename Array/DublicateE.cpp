#include<iostream>
#include<vector>
using namespace std;
void Remove_Dublicate(int arr[],int n){
    /*vector<int>ans;
    for(int i=0;i<n;i++){
        if(ans.empty()||ans.back() != arr[i]){
            ans.push_back(arr[i]);
        }
       
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }*/
   
}
int main(){
    int arr[]={1,2,2,10,4,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    Remove_Dublicate(arr,n);
}