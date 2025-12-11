#include <iostream>
using namespace std;

int partitioning(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;

  
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Place pivot at correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    // Arrange smaller on left, larger on right
    while (i < pivotIndex && j > pivotIndex) {
        while (i < pivotIndex && arr[i] <= pivot) {
            i++;
        }
        while (j > pivotIndex && arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void QuickSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int p = partitioning(arr, start, end);
    QuickSort(arr, start, p - 1);
    QuickSort(arr, p + 1, end);
}

int main() {
    int arr[] = {10, 3, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
