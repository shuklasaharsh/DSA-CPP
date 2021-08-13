#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void prime_sieve(ll *ptr, ll n) {
    // First mark all odd numbers

    for (ll i=3; i<= n; i+=2) {
        ptr[i] = 1;
    }
    // Multiples of all marked numbers are not prime
    for (ll i = 0; i <= n; i+=2) {
        if (ptr[i]==1) {
            for (ll j = i*i; j <= n; j+=i) {
                ptr[j] = 0;
            }
        }
    }

    ptr[2] = 1;
    ptr[1] = ptr[0] = 0;
}

int main() {
    ll n;
    cin >> n;

    ll p[1000000] = {0};

    prime_sieve(p, n);
    int count = 0;
    for (ll i = 0; i < n; i++) {
        if (p[i] == 1) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;

    cout << count << endl;

}