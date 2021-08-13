#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void prime_sieve(ll *_array) {
    // Mark all odd numbers
    ll n = 1000000;
    for (ll i = 3; i <= n; i+=2) {
        _array[i]=1;
    }
    cout << "1" << endl;
    for (ll i = 3; i <= n; i+=2) {
        if(_array[i]==1) {
            for (ll j = i*i; j <= n; j=j+i) {
                _array[j] = 0;
            }
        }
    }
    cout << "2" << endl;
    _array[2] = 1;
    _array[1] = 0;
    _array[0] = 0;
    cout << "3" << endl;
}


void prime_sieve(ll *ptr, ll n) {
    // First mark all odd numbers

    for (ll i=3; i<= n; i+=2) {
        ptr[i] = 1;
    }
    // Multiples of all marked numbers are not prime
    for (ll i = 3; i <= n; i+=2) {
        if (ptr[i]==1) {
            for (ll j = i*i; j <= n; j=j+i) {
                ptr[j] = 0;
            }
        }
    }

    ptr[2] = 1;
    ptr[1] = ptr[0] = 0;
}

int findCount(int _start_number, int _end_number, ll *_array) {
    int count = 0;
    for (ll i = _start_number; i <= _end_number; i++) {
        if (_array[i] == 1) {
            count++;
        }

    }

    return count;
}


int main() {
    ll test, a, b;
    ll array_[1000000] = {0};
    ll csum[1000000] = {0};

    prime_sieve(array_);
    for (ll i = 1; i <= 1000000; i++) {
        csum[i] = csum[i-1] + array_[i];
    }
    cin >> test;
    while(test--) {
        cin >> a >> b;
        cout << csum[b] - csum[a-1] << endl;
    }
}