#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3, m = 3; 
    vector<vector<int>> arr = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    cout << "Original Array:\n";
    for(auto &row : arr){
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
    cout << endl;

    
    vector<vector<int>> diff(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            diff[i][j] = arr[i][j];
            if(i > 0) diff[i][j] -= arr[i-1][j];
            if(j > 0) diff[i][j] -= arr[i][j-1];
            if(i > 0 && j > 0) diff[i][j] += arr[i-1][j-1];
        }
    }

    cout << "Difference Array:\n";
    for(auto &row : diff){
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
    cout << endl;

    
    int r1 = 0, c1 = 0, r2 = 1, c2 = 1, x = 1;

    diff[r1][c1] += x;
    if(c2 + 1 < m) diff[r1][c2+1] -= x;
    if(r2 + 1 < n) diff[r2+1][c1] -= x;
    if(r2 + 1 < n && c2 + 1 < m) diff[r2+1][c2+1] += x;

    cout << "Difference Array After Update:\n";
    for(auto &row : diff){
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
    cout << endl;

    
    for(int i = 0; i < n; i++)
        for(int j = 1; j < m; j++)
            diff[i][j] += diff[i][j-1];

    cout << "After Row-wise Prefix Sum:\n";
    for(auto &row : diff){
        for(auto val : row) cout << val << " ";
        cout << endl;
    }
    cout << endl;

    
    for(int j = 0; j < m; j++)
        for(int i = 1; i < n; i++)
            diff[i][j] += diff[i-1][j];

    cout << "Final Array After 2D Prefix Sum:\n";
    for(auto &row : diff){
        for(auto val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
