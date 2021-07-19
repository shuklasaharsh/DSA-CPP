/*
Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

Input Format
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 
Explanation
Rotate the array 90 degrees anticlockwise.
*/

#include <iostream>
#include <algorithm>
#include <vector>

#define typeMatrix vector<vector<int>>

using namespace std;


void rotateMatrix(int **v, int n) {
    for (int i = 0; i < n; i++) {
        reverse(v[i], v[i]+n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                swap(v[i][j], v[j][i]);
            }
        }
    }
}

int main() {

    // INPUT STAGE
    int n;
    cin >> n;
    int **matrix;
    matrix = new int*[n-1];
    for (int i  = 0; i < n; i++) {
        matrix[i] = new int[n-1];
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    // EXECUTION STAGE
    rotateMatrix(matrix, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}