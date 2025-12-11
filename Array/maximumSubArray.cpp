#include<iostream>
#include<algorithm>
using namespace std;

int MaxsubarrayOfkey(int arr[], int n, int key) {
    int count = 0; 
    cout << "Subarrays with sum equal to " << key << ":\n";

    // Find subarrays with the sum equal to key
    for (int i = 0; i < n; i++) {
        int sum = 0; // Reset sum for each starting index
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == key) {
                count++;
               
                cout << "Subarray (" << i << ", " << j << ") -> ";
                for (int k = i; k <= j; k++) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }

    cout << "\nNumber of subarrays with sum equal to " << key << ": " << count << endl;

    
    int currsum = arr[0];
    int maxsum = arr[0];
    for (int i = 1; i < n; i++) {
        currsum = max(arr[i], currsum + arr[i]);
        maxsum = max(maxsum, currsum);
    }
    
    cout << "Maximum subarray sum: " << maxsum << endl;
    return 0;
}

int main() {
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = 8;
    int key = 15;
    MaxsubarrayOfkey(arr, n, key);
    return 0;
}
