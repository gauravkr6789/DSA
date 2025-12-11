#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int capacity,int day){
    int dayCount=0;
    int PackageSum=0;
    for(int i=0;i<n;i++){
        if(arr[i] > capacity){
            return false;
        }
        PackageSum+=arr[i];
        if(PackageSum > capacity){
            dayCount++;
            PackageSum=arr[i];

            if(dayCount >= day){
                return false;
            }
        }
        else{
            PackageSum+=arr[i];
        }
       
    }
    return true;
}

int CapacityToShipPackage(int arr[],int n,int d){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    int end=sum;
    int ans=0;
    while(start <= end){
        int mid=(start+end)/2;
        if(isPossible(arr,n,mid,d)){
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
    int arr[]={50,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int day=1;
    int result=CapacityToShipPackage(arr,n,day);
    cout<<"capacity of ship to complete package within minimum days: "<<result;
}