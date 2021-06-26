#include <iostream>
#include <cmath>

using namespace std;

int sumofdigits(int a) {
    int sum = 0;
    while(a>0) {
        sum += a%10;
        a/=10;
    }
    return sum;
}

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i = 0; i < TESTCASES; i++) {
        int a;
        cin >> a;
        cout << sumofdigits(a)  << endl;
    }
    return 0;
}