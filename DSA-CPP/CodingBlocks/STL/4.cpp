#include <utility>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> v1  = {1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6};
    auto lower = lower_bound(v1.begin(), v1.end(), 4);
    auto upper = upper_bound(v1.begin(), v1.end(), 4);

    for (auto it = lower; it!=upper; it++) {
        cout << *it << ' ';
    }
}