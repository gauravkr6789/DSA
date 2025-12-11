#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int mid, int m) {
    int pageSum = 0;
    int studentCount = 1; // Start with one student

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            // A single book has more pages than mid, allocation not possible
            return false;
        }

        if (pageSum + arr[i] > mid) {
            // Allocate books to next student
            studentCount++;
            pageSum = arr[i];

            if (studentCount > m) {
                return false;
            }
        } else {
            pageSum += arr[i];
        }
    }

    return true;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    int mid = 50;

    bool ans = isPossible(arr, n, mid, m);
    cout << (ans ? "True" : "False") << endl;

    return 0;
}
