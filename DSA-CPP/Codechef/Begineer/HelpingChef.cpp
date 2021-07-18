#include <iostream>

using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++) {
        int n;
        cin >> n;
        if (n < 10) {
            cout << "Thanks for helping Chef!" << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
