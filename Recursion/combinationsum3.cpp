#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> ans;
vector<int> curr;

void solve(vector<int>& digits, int target, int k, int index) {
    
    if (target == 0 && curr.size() == k) {
        ans.push_back(curr);
        return;
    }
    if (target < 0 || index >= digits.size()) {
        return;
    }
    curr.push_back(digits[index]);
    solve(digits, target - digits[index], k, index + 1);
    curr.pop_back();
    solve(digits, target, k, index + 1);
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5};
    int target = 5;
    int k = 2;

    solve(digits, target, k, 0);

    cout << "Combinations:\n";
    for (auto &vec : ans) {
        cout << "[ ";
        for (int x : vec) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
