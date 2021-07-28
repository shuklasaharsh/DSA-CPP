#include <iostream>

using namespace std;

void getEscapeStrength(char **stringArray, int m, int n, int k, int s) {
    // cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
             // Energy taken for every step
            if (stringArray[i][j] == '.') {
                // cout << ". ";
                s-=2;
                s--;
            }
            if (stringArray[i][j] == '*') {
                // cout << "* ";
                s+=5;
                s--;
            }
            if (stringArray[i][j] == '#') {
                s--;
                // cout << "# " << endl;
                break; // Break inner loop without losing energy
            }
            if (s < k) {
                cout << "No" << endl;
                return;
            }
        }
        s++;
        // cout << endl;
    }
    cout << "Yes" << endl << s << endl;
    return;
}

int main() {
    int m, n, k, s;
    cin >> m >> n >> k >> s;
    char **stringArray = new char*[m];
    for (int i = 0; i < m; i++) {
        stringArray[i] = new char[n];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> stringArray[i][j];
        }
    }

    getEscapeStrength(stringArray, m, n, k, s);

}