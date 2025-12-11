#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSearch(vector<vector<char>>& board, int row, int col, char ch) {
    int rows = board.size();
    int cols = board[0].size();

    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        return false;
    }

    if (board[row][col] == '$') {
        return false;
    }

    if (board[row][col] != ch) {
        return false;
    }

    return true;
}

bool findSol(vector<vector<char>>& board, int row, int col, string& word, int idx) {
    if (idx == word.length()) {
        return true;
    }

    if (!isPossibleSearch(board, row, col, word[idx])) {
        return false;
    }

    char temp = board[row][col];
    board[row][col] = '$';

    bool found = false;

    if (findSol(board, row, col + 1, word, idx + 1)) {
        found = true;
    }
    else if (findSol(board, row, col - 1, word, idx + 1)) {
        found = true;
    }
    else if (findSol(board, row + 1, col, word, idx + 1)) {
        found = true;
    }
    else if (findSol(board, row - 1, col, word, idx + 1)) {
        found = true;
    }

    board[row][col] = temp;

    return found;
}

bool exist(vector<vector<char>>& board, string word) {
    int rows = board.size();
    int cols = board[0].size();

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (findSol(board, r, c, word, 0)) {
                return true;
            }
        }
    }

    return false;
}

void printBoard(const vector<vector<char>>& board) {
    for (int r = 0; r < board.size(); r++) {
        for (int c = 0; c < board[r].size(); c++) {
            cout << board[r][c] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    string word = "ABCCED";

    cout << "Board:" << endl;
    printBoard(board);

    cout << "\nSearching for word: " << word << endl;

    if (exist(board, word)) {
        cout << "Word FOUND!" << endl;
    }
    else {
        cout << "Word NOT found." << endl;
    }

    return 0;
}
