#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){
   
    int firstlength=(mid-start)+1;
    int secondlength=(end-mid);
    int*firstArray=new int[firstlength];
    int*secondArray=new int[secondlength];
    int k=0;
    for(int i=start;i <= mid;i++){
        firstArray[k++]=arr[i];
    }
    k=0;
    for(int i=mid+1;i<=end;i++){
        secondArray[k++]=arr[i];
    }

    // merge the two parts of array which are broken 

    int i=0;
    int j=0;
    k=start;
    while(i < firstlength && j < secondlength){
        if(firstArray[i] < secondArray[j]){
            arr[k++]=firstArray[i++];
        }
        else if(firstArray[i] > secondArray[j]){
            arr[k++]=secondArray[j++];
        }
    }
    while(i < firstlength){
        arr[k++]=firstArray[i++];
    }
    while(j < secondlength){
        arr[k++]=secondArray[j++];
    }
    delete []firstArray;
    delete[]secondArray;
    
}

void mergeSort(int arr[],int start,int end){
    if(start >= end){
        return;
    } //--> this is base case
    
    
    int mid=(start+end)/2;
    
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    
    int arr[]={1,10,2,5,6};
    int n=sizeof(arr)/sizeof(arr);
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // Create temp arrays
    int* left = new int[n1];
    int* right = new int[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[start...end]
    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    // Copy remaining elements of left[], if any
    while (i < n1)
        arr[k++] = left[i++];

    // Copy remaining elements of right[], if any
    while (j < n2)
        arr[k++] = right[j++];

    // Free the dynamically allocated memory
    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int start, int end) {
    if (start >= end) {
        return;  // Base case
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {1, 10, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/


