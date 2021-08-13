#include <iostream>

using namespace std;

int power(int a, int n) {
    cout << a << "^" << n << endl;
    int ans = 1;
    while (n>0) {
        int bit = n&1;
        if (bit) {
            ans= ans* a;
        }
        a = a*a;
        n = n>>1;
    }
    return ans;
}

int main() {
    int a, c;
    cin >> a >> c;
    cout << power(a,c) << endl;
}