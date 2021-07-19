/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
*/

#include <iostream>
#include <vector>

using namespace std;

#define typeVector vector<int>
#define typeMatrix vector<vector<int>>

void spiralPrint(typeMatrix mat, int m, int n) {
    int sr =0, sc = 0, er = m-1, ec = n-1;
    while (sr <= er && sc <= ec) {
        for (int i = sr; i <= er; i++) {
            cout << mat[i][sc] << ", ";
        }
        sc++;

        for (int i = sc; i <= ec; i++) {
            cout << mat[er][i] << ", ";
        }
        er--;

        for (int i = er; i>=sr; i--) {
            cout << mat[i][ec] << ", ";
        }
        ec--;

        for (int i = ec; i >=sc; i--) {
            cout << mat[sr][i] << ", ";
        }
        sr++;
    }

    cout << "END";
}

int main() {
    int m, n;
    cin >> m >> n;
    typeMatrix mat;
    mat.resize(m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            mat[i].push_back(temp);
        }
    }

    spiralPrint(mat, m, n);
}