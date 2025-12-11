/*#include<iostream>

using namespace std;
bool isPossible(int arr[],int m,int n,int maxAllowed){
    
    int student =0;
    int pagesum =0;
    for(int i=0;i<n;i++){
       
        if(pagesum+arr[i] <= maxAllowed){
            pagesum += arr[i];
        }
        else{
            student++;
            pagesum=arr[i];
        }
    }
    if(student > m){
        return false;
    }
   
        return true;
    
}

int AllocateBook(int arr[],int m){
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    int end=sum;
    while(start < end){
        int mid=(start+end)/2;
        if(isPossible(arr,2,n,mid)){
            cout<<arr[mid];
        }
        else{
            return -1;
        }
    } 
}
int main(){
    int arr[4]={10,20,30,40};
    int m=2;
    AllocateBook(arr,m);
}*/
#include <iostream>
using namespace std;

// Function to check if it's possible to allocate books
bool isPossible(int arr[], int m, int n, int maxAllowed) {
    int student = 1;   // Start with the first student
    int pagesum = 0;

    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= maxAllowed) {
            pagesum += arr[i];
        } else {
            student++;
            pagesum = arr[i];
            if (arr[i] > maxAllowed) {
                return false;  // A single book exceeds maxAllowed
            }
        }
    }
    return student <= m;
}

// Function to allocate books optimally
int AllocateBook(int arr[], int n, int m) {
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        start = max(start, arr[i]);  // At least one book per student
    }
    int end = sum;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (isPossible(arr, m, n, mid)) {
            result = mid;
            end = mid - 1;  // Try to find a smaller maximum
        } else {
            start = mid + 1;  // Increase the maxAllowed pages
        }
    }
    return result;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;  // Number of students

    int minMaxPages = AllocateBook(arr, n, m);
    cout << "The minimum number of pages allocated to the student with the maximum load: " << minMaxPages << endl;

    return 0;
}
