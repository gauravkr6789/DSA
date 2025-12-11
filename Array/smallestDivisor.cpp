#include<iostream>
using namespace std;
#include<Math.h>
#include<algorithm>
int sumOfDevisor(int arr[],int n,int divisor){
    int sum=0;
    int divisonOfnumber=0;
    for(int i=0;i<n;i++){
        divisonOfnumber=ceill((double)arr[i]/divisor);
        sum+=divisonOfnumber;
    }
   return sum;
}
int findSmallestDivisor(int arr[],int n,int k){
    int start=1;
    int ans=0;
    int end=*max_element(arr,arr+n);
    while(start <= end){
        int mid=start+(end-start)/2;
        int sum=sumOfDevisor(arr,n,mid);
        if(sum <= k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int small=findSmallestDivisor(arr,n,6);
    cout<<small;
}