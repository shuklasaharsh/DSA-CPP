#include <iostream>
#include <climits>

using namespace std;

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    int max = INT_MIN;
    for (int i = 0; i < TESTCASES; i++) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a-b);
        if (diff > max) {
            max = diff;
            if (a>b)
        }
    }
}