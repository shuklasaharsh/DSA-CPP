#include <iostream>

using namespace std;
int main() {
    int n, i, v;
    cin >> n >> i >> v;
    int mask = ~(1<<i);
    int cleared = n&mask;
    n = cleared|(v<<i);
    cout << n << endl;
}