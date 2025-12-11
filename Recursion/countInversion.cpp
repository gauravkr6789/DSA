#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){

}
void mergeSort(int arr[],int start,int end){
    
    while(start < end){
        if(start >= end){
            return;
        }
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }

}
int main(){
    int arr[]={1,10,2,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}