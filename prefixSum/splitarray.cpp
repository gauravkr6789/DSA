/*#include<iostream>
using namespace std;
int splitPoint(int arr[],int n){
    int leftsum=0;
    for(int i=0;i<n;i++){
        leftsum+=arr[i];
        int rightSum=0;
        for(int j=i+1;j<n;j++){
            rightSum+=arr[j];
        }
        if(leftsum == rightSum){
            return i+1;
        }
    }
    return -1;
}

void printSplit(int arr[],int n){
    int splitPointIndex=splitPoint(arr,n);
    if(splitPointIndex == -1 || splitPointIndex == n){
        return;
    }

   // left part 

   for(int i=0;i<splitPointIndex;i++){
    cout<<arr[i]<<" ";
   }

   // right part
   cout<<"--->";
   for(int i=splitPointIndex;i<n;i++){
    cout<<arr[i]<<" ";
   }
}

int main(){
    int arr[]={1,2,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printSplit(arr,n);
}*/

#include<iostream>
using namespace std;
int splitPoint(int arr[],int n){
    int leftsum=0;
    
    for(int i=0;i<n;i++){
        leftsum+=arr[i];
    }
    int rightSum=0;
    for(int i=0;i<n;i++){
        rightSum+=arr[i];
        leftsum-=arr[i];
        if(rightSum == leftsum){
            return i+1;
        }
    }
    return -1;     
}

void printSplit(int arr[],int n){
    int splitPointIndex=splitPoint(arr,n);
    if(splitPointIndex == -1 || splitPointIndex == n){
        return;
    }

   // left part 

   for(int i=0;i<splitPointIndex;i++){
    cout<<arr[i]<<" ";
   }

   // right part
   cout<<"--->";
   for(int i=splitPointIndex;i<n;i++){
    cout<<arr[i]<<" ";
   }
}

int main(){
    int arr[]={1,2,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printSplit(arr,n);
}



