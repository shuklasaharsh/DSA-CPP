#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

#define ll long long

ll getPower(ll base, ll exp) {
    ll result = 1;
    while (exp)
    {
        if (exp&1) {
            result *= base;
        }
        exp >>= 1;
        base*=base;
    }
    return result;
    
}

int main() {
    ll a, n;
    cin >> a >> n;
    cout << getPower(a, n) << endl;
}