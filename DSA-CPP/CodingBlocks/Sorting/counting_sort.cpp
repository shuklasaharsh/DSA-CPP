#include <bits/stdc++.h>
using namespace std;

#define vect vector<int>

int main() {
    int n;
    cin >> n;

    vect v;
    while (n--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    for (auto i:v) {
        cout << i << " ";
    }
}

