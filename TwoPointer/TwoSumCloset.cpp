#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

vector<vector<int>> twoSumClosest(vector<int> arr, int target) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    int bestDiff = INT_MAX;
    int count = 0;

    while (left < right) {
        int currSum = arr[left] + arr[right];
        int currDiff = abs(currSum - target);

        if (currDiff < bestDiff) {
            bestDiff = currDiff;
            ans.clear(); 
            ans.push_back({arr[left], arr[right]});
            count = 1;
        } else if (currDiff == bestDiff) {
            ans.push_back({arr[left], arr[right]});
            count++;
        }

        if (currSum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "Count of pairs with sum closest to target: " << count << endl;
    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5,6,7};
    int target = 10;
    vector<vector<int>> result = twoSumClosest(v, target);

    for (auto& pair : result) {
        cout << "Pair with sum closest to target: " << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}

