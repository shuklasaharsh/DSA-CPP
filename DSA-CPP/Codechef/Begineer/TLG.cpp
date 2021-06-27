#include <iostream>
#include <climits>

using namespace std;

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    int max = INT_MIN;
    int index = 0;
    for (int i =0; i < TESTCASES; i++) {
        int a,b;
        cin >> a >> b;
        int current = abs(a-b);
        if (current > max) {
            max = current;
            index = i;
        }
    }
    cout << ++index << " " << max;
}