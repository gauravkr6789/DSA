#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> reversePair(int arr[], int n) {
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i < j && arr[i] > arr[j] * 2) {
                ans.push_back({i, j});
            }
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 3, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> res = reversePair(arr, n);

    cout << "Reverse Pairs (indices):\n";
    for (const auto &pair : res) {   
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}
