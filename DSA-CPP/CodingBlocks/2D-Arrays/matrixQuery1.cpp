#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define typeQuery pair<pair<int, int>, pair<int, int>>
#define typeMatrix vector<vector<int>>

// Operator overload

ostream &operator<<(ostream &o, vector <vector <int>> &given_vector) {
    for (int i = 0; i < given_vector.size(); i++) {
        for (int j = 0; j < given_vector[i].size(); j++) {
            o << given_vector[i][j] << " ";
        }
        o<< endl;
    }
    return o;
}

vector<vector<int>> getSumMatrix(vector<vector<int>> given_matrix) {
    vector<vector<int>> output_matrix;
    output_matrix.resize(given_matrix.size());
    for (int i = 0; i < given_matrix.size()-1; i++) {
        for (int j = 0; j < given_matrix[i].size(); j++) {
            given_matrix[i+1][j] += given_matrix[i][j];
        }
    }

    for (int i = 0; i < given_matrix.size(); i++) {
        for (int j = 0; j < given_matrix[i].size()-1; j++) {
            given_matrix[j+1][i] += given_matrix[j][i];
        }
    }
    return given_matrix;
 }

// The approach would be to find the prefix matrix and then create a mathematical operation that helps us calculate the sum of all submatrix

int main(void) {
    int row, column;
    cin >> row >> column;
    vector<vector<int>> matrix;

    matrix.resize(row);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int inp;
            cin >> inp;
            matrix[i].push_back(inp);
        }
    }

    // We need the following matrix

    // 123   |  1 1+2 1+2+3 |  1 1+2 1+2+3
    // 456   |  1 1+2 1+2+3 |  1+4 1+2+4+5 1+2+3+4+5+6
    // 789   |  1 1+2 1+2+3 |  1+4+7 1+2+4+5+7+8 1+2+3+4+5+6+7+8+9

    type_matrix a = getSumMatrix(matrix);
    cout << a;

    typeQuery = {{1,2},{2,3}};
    // To get the sum we have the formula >> value(x,y) - value(i-1,y) - value(x, j-1) - value(i-1, j-1);
    int sumofsubarrays = 0;
    for (int top_left_i = 0; top_left_i<matrix.size();top_left_i++) {
        for (int top_left_j = 0; top_left_j< matrix.size(); top_left_j++) {
            for (int bottom_right_i = top_left_i; bottom_right_i<matrix.size(); bottom_right_i++) {
                for (int bottom_right_j = top_left_j; bottom_right_j<matrix.size(); bottom_right_j++) {
                    sumofsubarrays+=a[bottom_right_i][bottom_right_j]-a[top_left_i-1][bottom_right_j]-a[bottom_right_i][top_left_j-1]+a[top_left_i-1][top_left_j-1];
                }
            }
        }
    }
    cout << sumofsubarrays; 
}