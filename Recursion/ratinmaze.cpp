#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& m, int n, int row, int col, vector<vector<int>>& vis) {
    return (row >= 0 && row < n && col >= 0 && col < n 
            && m[row][col] == 1 
            && vis[row][col] == 0);
}

void helper(vector<vector<int>>& m, int n, int row, int col, vector<vector<int>>& vis, string path, vector<string>& ans) {
    // base case: reached destination
    if (row == n-1 && col == n-1) {
        ans.push_back(path);
        return;
    }

    vis[row][col] = 1;

    // Down
    if (isSafe(m, n, row+1, col, vis)) {
        helper(m, n, row+1, col, vis, path + "D", ans);
    }
    // Up
    if (isSafe(m, n, row-1, col, vis)) {
        helper(m, n, row-1, col, vis, path + "U", ans);
    }
    // Left
    if (isSafe(m, n, row, col-1, vis)) {
        helper(m, n, row, col-1, vis, path + "L", ans);
    }
    // Right
    if (isSafe(m, n, row, col+1, vis)) {
        helper(m, n, row, col+1, vis, path + "R", ans);
    }

    vis[row][col] = 0; // backtrack
}

vector<string> ratInMaze(vector<vector<int>>& m, int n) {
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));

    if (m[0][0] == 1) {
        helper(m, n, 0, 0, vis, "", ans);
    }
    return ans;
}
