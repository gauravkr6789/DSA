#include<iostream>
using namespace std;
void movetozero(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[j] !=0){
                swap(arr[i],arr[j]);
               
                
            }
        }
    }
    
}
int main(){
    int i;
    int arr[] = {12, 0, 11, 0, 13, 5, 6, 0, 0, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    movetozero(arr, n);
    cout<<"Array after moving all non-zero elements to the beginning: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
