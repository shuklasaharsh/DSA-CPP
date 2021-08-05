#include <iostream>
#include <vector>

using namespace std;

#define vect vector<int>

int main() {
    vector<vect> a;
    int m, n;
    cin >> m >> n;
    a.resize(m);
    for (int i = 0; i < n; i++) {
        a[i].resize(n);
    }

    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}