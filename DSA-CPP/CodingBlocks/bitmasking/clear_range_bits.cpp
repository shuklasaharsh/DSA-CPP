#include <iostream>

using namespace std;

int main() {

    // O(n)
    int number;
    int till;
    cin >> number >> till;
    till++;
    int cpnumber = number;
    for (int i = 0; i < till; i++) {
        number = number & (~(1<<i));
    }

    cout << number <<endl;

    // O(1)
    int mask = (~(0))<<till;
    cpnumber = mask&cpnumber;
    cout << cpnumber << endl;
}