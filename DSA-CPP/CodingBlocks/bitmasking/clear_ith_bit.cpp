#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n >> i;
    int mask = (~(1<<i));
    int no = (n&mask);
    cout << no << endl;
}