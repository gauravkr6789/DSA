#include<iostream>
#include<vector>
using namespace std;

void backtrack(int index, vector<int>& arr, int target,
               vector<int>& curr, vector<vector<int>>& ans) {

    if(target == 0){
        ans.push_back(curr);
        return;
    }
    if(index >= arr.size() || target < 0) return;
    curr.push_back(arr[index]);
    backtrack(index, arr, target - arr[index], curr, ans); 
    curr.pop_back();
    backtrack(index + 1, arr, target, curr, ans);
}

vector<vector<int>> CombinationSum(vector<int> arr, int target){
    vector<vector<int>> ans;
    vector<int> curr;

    backtrack(0, arr, target, curr, ans);
    return ans;
}

int main() {
    vector<int> arr = {2,3,6,7};
    int target = 7;

    vector<vector<int>> result = CombinationSum(arr, target);

    for(auto &comb : result){
        for(int x : comb) cout << x << " ";
        cout << endl;
    }
}
