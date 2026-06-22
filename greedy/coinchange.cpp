#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int x,int y){
    return x > y;
}
int coinChange(int arr[],int n,int amount ){
     sort(arr,arr+n,compare);

     int coinCount=0;
     for(int i=0;i<n;i++){
        while(amount >= arr[i]){
            amount-=arr[i];
            coinCount++;
        }
     }
     return coinCount;
}

int main(){
    int arr[]={1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=coinChange(arr,n,11);
    cout<<"number of coin: "<<result;

}