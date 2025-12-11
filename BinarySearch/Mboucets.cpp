#include <iostream>
#include <algorithm>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int n,int mid,int m,int k){
    int count=0;
    int buoquets=0;
    for(int i=0;i<n;i++){
        if(arr[i] <= mid){
            count++;
        }
        if(count == k){
            buoquets+=count/k;
            count=0;
        }
    }
    return buoquets == m;

}
int FindMbuoquets(int arr[],int n,int m,int k){
    int start=*min_element(arr,arr+n);
    int end=*max_element(arr,arr+n);
    int ans=0;
    while(start <= end){
        int mid=start+(end-start)/2;
        if(isPossible(arr,n,mid,m,k)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {7, 7, 7, 7, 7, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    int k = 3;
    int ans = FindMbuoquets(arr, n, m, k);
    cout <<"minimum days to make"<<" "<<m<<" "<<"buquotes is : "<< ans << endl;
    return 0;
}
