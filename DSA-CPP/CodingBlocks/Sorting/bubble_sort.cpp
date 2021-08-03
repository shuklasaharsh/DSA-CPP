#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define typeVector vector<int>

typeVector sorted(typeVector v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++) {
            if (v[j] < v[i]) {
                swap(v[i], v[j]);
            }
        }
    }
    return v;
}

int main() {
    typeVector v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    typeVector u = sorted(v);

    for (auto e:u) {
        cout << e << " ";
    }
    cout << endl;
}