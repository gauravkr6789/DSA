#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr1[7]={1,2,3,4,5,6,7};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[7]={2,4,6,8,10,12,14};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int size=sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size]={};
    int i=0,j=0,k=0;
    bool visited=false;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];
        }
        else{
            arr3[k++]=arr1[i++];
            j++;
            visited=true;
        }
    }
    while(i<m){
        if(visited){
            arr3[k++]=arr1[i++];
            visited=false;
        }
        else{
            arr3[k++]=arr1[i++];
        }
    }
    while(j<n){
        if(visited){
            arr3[k++]=arr2[j++];
            visited=false;
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
        
    for(int i=0;i<14;i++){
        cout<<arr3[i]<<" ";
    }
   
}
