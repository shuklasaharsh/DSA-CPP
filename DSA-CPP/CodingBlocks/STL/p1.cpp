#include <iostream>
#include <algorithm>
#include <vector>

#define typeVector vector<int>

using namespace std;

void actual_main() {
    typeVector v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    next_permutation(v.begin(), v.end());

    for (auto i:v) {
        cout << i << " ";
    }
    cout << endl;


    return;
}

int main() {
    int test_cases;

    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        actual_main();
    }

    return 0;
}