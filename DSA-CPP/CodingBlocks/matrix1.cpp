#include <iostream>
#include <vector>

using namespace std;

#define typeMatrix vector<vector<int>>

ostream &operator<<(ostream &o, typeMatrix &a) {
    for (auto row: a) {
        for (auto element:row) {
            o << element << " ";
        }
        o << endl;
    }
    return o;
}

int main(void) {
    typeMatrix a;
    int rows, columns;
    cin >> rows >> columns;
    a.resize(rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++ ) {
        for (int j = 0; j < columns; j++) {
            sum+=a[i][j]*((i+1)*(j+1)*(rows-i)*(columns-j));
        }
    }

    cout << "Sum: " << sum << endl;

    cout << a;
}