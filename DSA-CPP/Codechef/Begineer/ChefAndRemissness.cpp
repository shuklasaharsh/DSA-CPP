#include <iostream>

using namespace std;

int main() {
    int test;
    cin >> test;

    for (int i = 0; i < test; i++) {
        int a, b;
        cin >> a >> b;

        cout << (a>b?a:b) << " " << a+b << endl;
    }
}