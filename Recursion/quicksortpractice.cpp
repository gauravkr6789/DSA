#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr,int start,int end){
    int idx=start-1;
    int pivot=arr[end];

    for(int i=start;i<end;i++){
        if(arr[i] < pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }

    idx++;
    swap(arr[end],arr[idx]);

    return idx;
}

void quickSort(vector<int>&arr,int start,int end){
    if(start < end){
        int pivotIndex=partition(arr,start,end);

        cout<<"pivotIndx : "<<arr[end]<<" "<<pivotIndex<<endl;
        quickSort(arr,start,pivotIndex-1);
        quickSort(arr,pivotIndex+1,end);
    }
}


int main(){
    vector<int>arr={6,2,1,5,8,9};
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}