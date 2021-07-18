#include <iostream>

using namespace std;

void checkTriangle(int a, int b, int c) {
    if (a+b+c==180) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        checkTriangle(a,b,c);
    }
    return 0;
}