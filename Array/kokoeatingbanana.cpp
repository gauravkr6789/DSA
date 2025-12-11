#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool isPossible(int arr[],int n,int mid,int hours){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += ceill((float)arr[i]/mid);
       
    }
    return sum <= hours;
   
}
int kokoEatBananas(int arr[],int n,int hours){
    int start=1;
    int end=*max_element(arr, arr + n);
    int ans=end;
    
    while(start <= end){
        int mid=start+(end-start)/2;
        if(isPossible(arr,n,mid,8)){
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
    int arr[]={3,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int hour=8;
    int result=kokoEatBananas(arr,n,hour);
    cout<<result;
}