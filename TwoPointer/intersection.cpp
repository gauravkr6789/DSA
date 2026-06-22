#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0;
    vector<int> result;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else {
            if(result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> a1 = {1,2,2,3};
    vector<int> a2 = {2,2};

    vector<int> ans = intersection(a1, a2);

    for(auto x : ans) {
        cout << x << " ";
    }
}