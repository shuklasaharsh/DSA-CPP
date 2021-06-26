#include <iostream>

using namespace std;

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i = 0; i < TESTCASES; i++) {
        int a, b;
        cin >> a >> b;
        cout << a%b << endl;
    }
}