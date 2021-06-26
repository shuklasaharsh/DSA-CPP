#include <iostream>
using namespace std;
int reversethenumber(int a) {
    int reverse = 0;
    while (a!=0) {
        reverse = 10*reverse;
        int remainder = a%10;
        reverse+=remainder;
        a = a/10;
    }
    return reverse;
}

int main(void) {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i = 0; i < TESTCASES; i++) {
        int a;
        cin >> a;
        cout << reversethenumber(a) << endl;
    }
    return 0;
}