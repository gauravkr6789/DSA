#include<iostream>
#include<vector>
using namespace std;
void MergeArr(int arr[],int startIndex ,int midIndex ,int endIndex){
    int size1=startIndex;
    int size2=midIndex+1;
    vector<int>mergeArray;
    while(size1 <= midIndex && size2 <= endIndex){
        if(arr[size1] < arr[size2]){
            mergeArray.push_back(arr[size1++]);
        }
        else{
            mergeArray.push_back(arr[size2++]);
        }
    }
    while(size1 <= midIndex){
        mergeArray.push_back(arr[size1++]);
    }
    while(size2 <= endIndex){
        mergeArray.push_back(arr[size2++]);
    }
    
    for(int size3=0;size3 < mergeArray.size();size3++){
        arr[startIndex+size3]=mergeArray[size3];
    }
}
void mergeSort(int arr[],int startIndex,int endIndex){
    if(startIndex >= endIndex){
        return;
    }
    int mid=startIndex+(endIndex-startIndex)/2;
    mergeSort(arr,startIndex,mid);
    mergeSort(arr,mid+1,endIndex);
    MergeArr(arr,startIndex,mid,endIndex);

}
int main(){
    int arr[] = {1 ,2, -1,0};
    int n = 6;

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array : ";
    for(int x : arr) cout << x << " ";
}