#include<iostream>
using namespace std;

int removeDublicate(int arr[], int n) {
    if (n == 0) return 0; // Handle empty array case

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; // Add the last unique element
    return j; // Return the new length
}

int main() {
    int arr[] = {1, 2, 2, 2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    n = removeDublicate(arr, n);
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) // Loop should go to n (not n + 1)
        cout << arr[i] << " ";
    
    return 0;
}
