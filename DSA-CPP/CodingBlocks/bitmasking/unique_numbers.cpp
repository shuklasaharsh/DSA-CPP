// Given a list of unique numbers, we need to find what number is occuring only once

// Example: 1,1,2,3,4,5,5,4,2,3,88
//                               ^
// Here 88 is occuring only once

// Logic: To solve we need to understand that a XOR b XOR a = b
// We will xor all the elements in the array and the last number will be the unique number;

#include <iostream>
#include <vector>

#define vect vector<int>


using namespace std;

int main() {
    int n;
    cin >> n;
    vect c;
    c.resize(n); //O(1) - Pushback is O(n) sometimes
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    // Input complete

    // Operation
    int running_xor = 0;
    for (auto i:c) {
        running_xor=running_xor^i;
    }

    cout << running_xor << endl;
}