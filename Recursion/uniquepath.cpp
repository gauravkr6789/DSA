#include<iostream>
#include<vector>
using namespace std;

int uniquPath(int m, int n, int row, int col){

    // boundary check
    if(row >= m || col >= n){
        return 0;
    }

    // base case
    if(row == m-1 && col == n-1){
        return 1;
    }

    int right = uniquPath(m, n, row, col+1);
    int down  = uniquPath(m, n, row+1, col);

    return right + down;
}

int main(){
    int m = 3, n = 3;
    cout <<"unique path Count :"<< uniquPath(m, n, 0, 0);
}