#include<iostream>
using namespace std;
#include<vector>
int countSubseq(int index, int k, vector<int> &arr, vector<int> &curr) {
    if (k == 0) return 1;
    if (index == arr.size() || k < 0) return 0;

    int count = 0;
    for (int i = index; i < arr.size(); i++) {
        curr.push_back(arr[i]);
        count += countSubseq(i + 1, k - arr[i], arr, curr);
        curr.pop_back();
    }
    return count;
}
