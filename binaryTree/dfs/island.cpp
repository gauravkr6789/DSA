#include <iostream>
#include <vector>
using namespace std;

void dfs(int row, int col, int n, int m, vector<vector<char>> &grid, vector<vector<bool>> &vis)
{

    if (row < 0 || col < 0 || row >= n || col >= m || vis[row][col] || grid[row][col] != '1')
    {
        return;
    }
    vis[row][col] = true;
    dfs(row - 1, col, n, m, grid, vis);
    dfs(row + 1, col, n, m, grid, vis);
    dfs(row, col - 1, n, m, grid, vis);
    dfs(row, col + 1, n, m, grid, vis);
}
int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    if(n == 0){
        return 0;
    }
    int m = grid[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int island = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '1' && !vis[i][j])
            {
                dfs(i, j, n, m, grid, vis);
                island++;
            }
        }
    }
    return island;
}

int main() {

    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };

    cout << "Number of Islands: " << numIslands(grid);

    return 0;
}
