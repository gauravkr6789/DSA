#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int i=low;
    int j=mid+1;

    while(i <=mid && j <= high ){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    while(j <= high){
        temp.push_back(arr[j++]);
    }

    int k=0;

    for(int k=low;k<=high;k++){
        arr[k]=temp[k-low];
    }

    
}

void mergesort(vector<int>&arr,int start,int end){
    if(start >= end){
        return;
    }

    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    vector<int>arr={1,2,8,5,3,6};
    int n=arr.size();
    mergesort(arr,0,n-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

