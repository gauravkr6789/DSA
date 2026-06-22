#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void backtrack(vector<int>& nums, int index, vector<vector<int>>& ans) {
    int n = nums.size();

    if (index == n) {
        ans.push_back(nums);
        return;
    }

    unordered_set<int> used;

    for(int i=index;i<n;i++){
        if(used.count(nums[i])) continue;
        used.insert(nums[i]);
        cout<<"before swap :"<<"value of i: "<<i<<" value of index: "<<index<<endl;
        swap(nums[i], nums[index]);
         cout<<"after swap :"<<"value of i: "<<i<<" value of index: "<<index<<endl;
        backtrack(nums, index + 1, ans);
         cout<<"after backtrack :"<<"value of i: "<<i<<" value of index: "<<index<<endl;
        swap(nums[i], nums[index]);
         cout<<"after second swap :"<<"value of i: "<<i<<" value of index: "<<index<<endl;
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    backtrack(nums, 0, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = permute(nums);

    for (auto v : result) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
}