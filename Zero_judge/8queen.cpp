#include <iostream>
#include <vector>

using namespace std;

#define N 8

void printSolution(const vector<int>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(const vector<int>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

void solveNQueens(int row, vector<int>& board, vector<vector<int>>& solutions) {
    if (row == N) {
        solutions.push_back(board);
        printSolution(board);
        return;
    }
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            solveNQueens(row + 1, board, solutions);
        }
    }
}

int main() {
    vector<int> board(N, -1);
    vector<vector<int>> solutions;
    solveNQueens(0, board, solutions);
    cout << "Total solutions: " << solutions.size() << endl;
    return 0;
}
