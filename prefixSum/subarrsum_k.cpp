#include<iostream>
#include<unordered_map>
using namespace std;
int SubArrCountEqualK(int arr[],int n,int k){
    unordered_map<int,int>mp;
    mp[0]=1;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(mp.find(sum-k) != mp.end() ){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
}

int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int ans=SubArrCountEqualK(arr,n,k);
    cout<<"count is : "<<ans;
}