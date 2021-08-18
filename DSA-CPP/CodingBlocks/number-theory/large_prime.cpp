#include <iostream>
#include <bitset>
#include <vector>

#define ll long long int

using namespace std;

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;

void sieve() {
    b.set();
    b[0] = b[1] = 0;
    for (ll i = 0; i <= n; i++) {
        if(b[i]) {
            primes.push_back(i);
            for (ll j = i*i; j <= n; j=j+i) {
                b[j] = 0;
            }
        }
    }
}

bool isPrime(ll number) {
    if (number <= n) {
        return b[number]?true:false;
    } else {
        for (ll i = 0; i*i < number; i++) {
            if (number%primes[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {


}