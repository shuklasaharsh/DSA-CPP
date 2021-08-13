#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int n, i, j;
    cin >> n >> i >> j;

    int mask1 = (~0)<<++j;
    int mask2 = ~((~0)<<i);
    int mask = mask1|mask2;

    cout << (int)(n & mask) << endl;

}