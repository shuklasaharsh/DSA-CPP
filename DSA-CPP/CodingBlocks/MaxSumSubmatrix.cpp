#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>
using namespace std;

#define typeMatrix vector<vector<int>>
#define typeVector vector<int>
typeMatrix getSuffixMatrix(typeMatrix matrix) {
    int rows = matrix.size()-1;
    int columns = matrix[0].size()-1;
    for (int i = rows; i >=0; i--) {
        for (int j = columns-1; j >= 0; j--) {
            matrix[i][j]+=matrix[i][j+1];
        }
    }

    for (int i = columns; i>=0; i--) {
        for (int j = rows-1; j>=0; j--) {
            matrix[j][i]+=matrix[j+1][i];
        }
    }
    return matrix;
}

int getMaximum(typeMatrix matrix) {
    int result = INT_MIN;
    matrix = getSuffixMatrix(matrix);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            result = max(result, matrix[i][j]);
        }
    }

    return result;
}

int main(void) {
    int row, column;
    cin >> row >> column;
    typeMatrix matrix;

    matrix.resize(row);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int inp;
            cin >> inp;
            matrix[i].push_back(inp);
        }
    }
    cout << getMaximum(matrix) << endl;
}