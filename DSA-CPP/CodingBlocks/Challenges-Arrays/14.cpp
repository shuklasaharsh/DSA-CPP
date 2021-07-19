#include <iostream>
#include <vector>

#define typeVector vector<int>
#define typeMatrix vector<vector<int>>

using namespace std;

int search(typeMatrix mat, int key) {
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == key) {
                return 1;
            }
        }
    }
    return 0;
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
    int key;
    cin >> key;

    cout << search(mat, key) << endl;
}