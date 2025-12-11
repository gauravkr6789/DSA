#include <iostream>
#include <vector>
using namespace std;

void Set_Matrix_Zero(vector<vector<int>> &mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    bool firstRowZero = false, firstColZero = false;

    // Step 1: check first row
    for (int j = 0; j < cols; j++) {
        if (mat[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Step 2: check first column
    for (int i = 0; i < rows; i++) {
        if (mat[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Step 3: use first row/col as markers
    for (int i = 0; i < rows; i++) {
        for (int j = ; j < cols; j++) {
            if (mat[i][j] == 0) {
                mat[i][0] = 0;  // mark row
                mat[0][j] = 0;  // mark col
            }
        }
    }

    // Step 4: set cells based on markers
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (mat[i][0] == 0 || mat[0][j] == 0) {
                mat[i][j] = 0;
            }
        }
    }

    // Step 5: handle first row
    if (firstRowZero) {
        for (int j = 0; j < cols; j++) {
            mat[0][j] = 0;
        }
    }

    // Step 6: handle first column
    if (firstColZero) {
        for (int i = 0; i < rows; i++) {
            mat[i][0] = 0;
        }
    }

    // Print final result
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat = {
        {0, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    Set_Matrix_Zero(mat);
}
