#include <iostream>
#include <vector>
using namespace std;

long long MergeArrCount(vector<int> &arr, int startIndex, int midIndex, int endIndex) {
    int leftPtr = startIndex;
    int rightPtr = midIndex + 1;
    vector<int> mergeArray;
    long long inversionCount = 0;

    while(leftPtr <= midIndex && rightPtr <= endIndex) {
        if(arr[leftPtr] <= arr[rightPtr]) {
            mergeArray.push_back(arr[leftPtr++]);
        } else {
            mergeArray.push_back(arr[rightPtr++]);
            inversionCount += (midIndex - leftPtr + 1);
        }
    }

    while(leftPtr <= midIndex) mergeArray.push_back(arr[leftPtr++]);
    while(rightPtr <= endIndex) mergeArray.push_back(arr[rightPtr++]);

    for(int k = 0; k < mergeArray.size(); k++)
        arr[startIndex + k] = mergeArray[k];

    return inversionCount;
}

long long mergeSortCount(vector<int> &arr, int startIndex, int endIndex) {
    if(startIndex >= endIndex) return 0;

    int mid = startIndex + (endIndex - startIndex) / 2;
    long long inversionCount = 0;

    inversionCount += mergeSortCount(arr, startIndex, mid);
    inversionCount += mergeSortCount(arr, mid + 1, endIndex);
    inversionCount += MergeArrCount(arr, startIndex, mid, endIndex);

    return inversionCount;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    long long inv_count = mergeSortCount(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Number of inversions: " << inv_count << endl;

    return 0;
}
