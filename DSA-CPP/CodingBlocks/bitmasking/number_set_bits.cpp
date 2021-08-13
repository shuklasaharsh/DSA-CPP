#include <iostream>
#include <bitset>

using namespace std;
// Log(N) Bits
int count_set_bits(int n) {
    int count = 0;
    while(n>0) {
        if ((n&1)==1) {
            count++;
        }
        n= n>>1;
    }
    return count;
}

int count_set_bits_fast(int n) {
    int count = 0;
    while (n > 0) {
        n=(n&(n-1));
        count++
    }

    return count;
}

int main() {
    int n10;
    cin >> n10;
    // STL Implementation
    bitset<32> n2(n10);
    cout << n2.count() << endl;

    cout << count_set_bits(n10) << endl;
}