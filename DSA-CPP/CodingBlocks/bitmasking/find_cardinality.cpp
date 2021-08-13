#include <iostream>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

ll findNumberOfDivisible(ll _limit, ll _a, ll _b = 1, ll _c = 1, ll _d = 1) {
    return floor(_limit/(_a*_b*_c*_d));
}

ll findNumberOfDivisible(ll _limit, vector<ll> _array_of_numbers) {
    ll __prod = 1;
    for (auto __number: _array_of_numbers) {
        __prod*=__number;
    }

    return floor(_limit/__prod);
}

void testCase(int count) {
    cout << "This is test case number: " << count << endl;
    ll n;

    cin >> n;
    vector<ll> array_of_numbers_ = {2,3,5,7,11,13,17,19};
    ll subsets = (1<<8)-1;
    for (ll i = 1; i <= subsets; i++) {
        ll denom = 1ll;
        ll setbits = __builtin_popcount(i); // Available in GNU-GCC / Clang++
    }
}



int main() {
    ll t;
    cin >> t;
    static int count = 1;
    while (t--) {
        testCase(count++);
    }

}