#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
vector<int> current;

void backtrack(vector<int>& candidates, int target, int start) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = start; i < candidates.size(); i++) {

        if (i > start && candidates[i] == candidates[i - 1])
            continue;

        if (candidates[i] > target)
            break;

        current.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], i + 1);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    backtrack(candidates, target, 0);
    return result;
}

int main() {
    vector<int> candidates = {10, 2,1, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> ans = combinationSum2(candidates, target);

    cout << "Unique combinations that sum to " << target << ":\n";
    for (auto &comb : ans) {
        cout << "[ ";   
        for (int x : comb) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
