#include <iostream>

using namespace std;

int sumofN(int n) {
    if (n>0) {
        return n+sumofN(n-1);
    }
    else {
        return 0;
    }
}

int main() {
    int n = 5;
    cout << sumofN(n) << endl;
}