#include <iostream>
#include <vector>
using namespace std;
bool is_Safe(vector<string> &mat,int row,int col,int n){
    for(int j=0;j<n;j++){
        if(mat[row][j] == 'Q'){
            return false;
        }
    }
    for(int i=0;i<n;i++){
        if(mat[i][col] == 'Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(mat[i][j] == 'Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j<=n;i--,j++){
        if(mat[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}


void Place_N_Queen(int row, vector<string>&mat, vector<vector<string>> &result)
{
    int n = mat.size();
    if (row == n)
    {
        result.push_back(mat);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (is_Safe(mat, row, j, n))
        {
            mat[row][j] = 'Q';
            Place_N_Queen(row + 1, mat, result);
            mat[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<string> mat(n, string(n,'.'));
    vector<vector<string>> result;
    Place_N_Queen(0,mat,result);
    return result;
}
int main(){
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;

    vector<vector<string>> solutions = solveNQueens(n);

    cout << "\nTotal solutions: " << solutions.size() << "\n\n";

    for (int k = 0; k < solutions.size(); k++) {
        cout << "Solution " << k + 1 << ":\n";
        for (string row : solutions[k]) {
            cout << row << "\n";
        }
        cout << "\n";    }

    return 0;

}
