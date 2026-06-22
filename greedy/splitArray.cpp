#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int *arr, int capacity, int n, int k) {
    int currSum = 0;
    int subarrays = 1;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];

        if(currSum > capacity) {
            subarrays++;
            currSum = arr[i];
        }
    }

    return subarrays <= k;
}

int splitArrayLargestSum(int *arr, int k, int n) {
    int low = *max_element(arr, arr + n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int high = sum;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(isPossible(arr, mid, n, k)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int arr[]={7, 2, 5, 10, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int ans=splitArrayLargestSum(arr,k,n);
    cout<<"largest split subarray sum is : "<<ans;

}