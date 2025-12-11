#include<iostream>
#include<vector>
using namespace std;
void rangeupdate(vector<int>&arr,int l,int r,int x){
    int n=arr.size();
    arr[l]+=x;
    if(r+1 < n){
        arr[r+1]-=x;
    }
}

void buildFinalArray1D(vector<int>& diff) {
    for (int i = 1; i < diff.size(); i++) {
        diff[i] += diff[i - 1];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Build initial difference array
    vector<int> diff = arr;
    for (int i = diff.size() - 1; i > 0; i--) {
        diff[i] -= diff[i - 1];
    }

    
    rangeupdate(diff, 1, 3, 10); // add 10 to index 1..3
    buildFinalArray1D(diff);

    // Print result
    for (int val : diff) cout << val << " ";
    cout << endl;

    return 0;
}