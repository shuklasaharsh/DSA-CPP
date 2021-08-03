#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define vect vector<int>

void insertion_sort(vect &v) {
    for (int i = 0; i < v.size(); i++ ) {
        int e = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > e) {
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = e;
    }
}

int main() {
    vect v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    insertion_sort(v);

    for (auto i:v) {
        cout << i << " ";
    }
}