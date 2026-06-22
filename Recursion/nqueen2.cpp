#include <iostream>
#include <vector>
using namespace std;

bool isSafeToPlace(vector<vector<char>> &board, int n, int row, int col)
{
    
    if(row < 0 || row >= n || col < 0 || col >= n){
        return false;
    }

  
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

    for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

int nqueen(vector<vector<char>> &board, int n, int row)
{
    if(row == n){
        return 1; 
    }

    int count = 0;

    for(int col = 0; col < n; col++){
        if(isSafeToPlace(board, n, row, col)){
            board[row][col] = 'Q';

            count += nqueen(board, n, row + 1);

            board[row][col] = '.'; 
        }
    }

    return count;
}
