#include <iostream>
using namespace std;
void moveZero(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==0 && arr[j]!=0){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"\nArray after moving zeros to the end: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[] = {1, 0, 2, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    moveZero(arr, n);
    return 0;
 
}