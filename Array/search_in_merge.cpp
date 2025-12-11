#include<iostream>
using namespace std;
void mergearr(int arr1[],int m,int  arr2[],int n){
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int k=0;
    int *arr3;
    int i=0;
    int j=0;
    while(i < m && j < n ){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i];
        }
        else{
            arr3[k++]=arr2[j];

        }

    }
    while(i < m){
        arr3[k++] = arr1[i];
    }
    while(j < n){
        arr3[k++] = arr1[i];
    }

    for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[8]={1,2,6,3,4,7,8,9};
    int arr2[7]={6,9,4,3,2,1,8};
    

}