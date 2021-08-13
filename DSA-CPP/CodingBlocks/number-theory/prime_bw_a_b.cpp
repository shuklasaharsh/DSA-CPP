#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int prime(int *ptr) {
    cout << "prime" << endl;
    // Mark all odd numbers
    int n = 1000000;
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

    // for (ll i = 3; i <= 1000000; i+=2) {
    //     ptr[i] = 1;
    // }

    // for (ll i = 0; i <= 1000000; i+=2) {
    //     if (ptr[i]==1) {
    //         for (ll j = i*i; j <= 1000000; j+=i) {
    //             ptr[j] = 0;
    //         }
    //     }
    // }

    // ptr[0] = ptr[1] = ptr[2] = 1;
    // cout << "exit prime" << endl;
    return 0;
}


int main() {
    cout << "main" << endl;
    int array[1000000] = {0};
    prime(array);

    int test;
    cin >>test;
    while (test--) {
        int a, b, count = 0;
        cin >> a >> b;
        for (int i = a; i < b; i++) {
            if (array[i]==1) {
                cout << i << " " << array[i]<< endl;
                count++;
            }
        }
        cout << endl;
        cout << count << endl;
    }
}