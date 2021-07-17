#include <iostream>
using namespace std;

long long factorial(long long n) {
    if(n==1 || n==0) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i = 0; i < TESTCASES; i++) {
        long long m;
        cin >> m;
        cout << factorial(m) << endl;
    }
}