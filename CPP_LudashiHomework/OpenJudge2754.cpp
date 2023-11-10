//
//  OpenJudge2754.cpp
//  CPP_LudashiHomework
//
//  Created by 吴坤城 on 11/10/23.
//

#include <iostream>
#include <vector>
#include <cmath>

const int N = 8;
std::vector<std::vector<int>> all_solutions;

bool isSafe(int row, int col, const std::vector<int>& position) {
    for (int i = 0; i < row; ++i) {
        if (position[i] == col || std::abs(position[i] - col) == std::abs(i - row)) {
            return false;
        }
    }
    return true;
}

void solveNQueens(std::vector<int>& position, int row) {
    if (row == N) {
        all_solutions.push_back(position);
        return;
    }

    for (int col = 0; col < N; ++col) {
        if (isSafe(row, col, position)) {
            position[row] = col;
            solveNQueens(position, row + 1);
            // Backtrack
            position[row] = -1;
        }
    }
}

void printSolutions(const std::vector<std::vector<int>>& solutions) {
    for (const auto& solution : solutions) {
        for (int col : solution) {
            std::cout << col + 1; // Output column positions (1-based index)
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> position(N, -1);
    solveNQueens(position, 0);
    printSolutions(all_solutions);
    return 0;
}
