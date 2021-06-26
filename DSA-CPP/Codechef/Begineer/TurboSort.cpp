#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int TEST;
    cin >> TEST;
    vector<int> arr;
    for (int i =0; i < TEST; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    for (auto i : arr) {
        cout << i << endl;
    }
    return 0;
}