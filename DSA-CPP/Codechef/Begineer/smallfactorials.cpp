#include <iostream>

using namespace std;

long long factorial(int number) {
    long long factorial = 1;
    for (int i = 1; i < number+1; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i =0; i < TESTCASES; i++) {
        int temp;
        cin >> temp;
        cout << factorial(temp) << endl;
    }
}