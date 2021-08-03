#include <iostream>
#include <algorithm>
#include <vector>

#define vect vector<int>

using namespace std;

ostream &operator<<(ostream &o, vect &v) {
    for (auto i:v) {
        o << i << endl;
    }

    return o;
}

void selection_sort(vect &v) {
    for (int i = 0; i < v.size()-1; i++) {
        int min_index = i;
        for (int j = i+1; j < v.size(); j++) {
            if (v[j]<v[min_index]) {
                min_index = j;
            }
        }
        swap(v[i], v[min_index]);
    }
}

int main() {
    int n;
    cin >> n;
    vect v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    selection_sort(v);
    cout << "----------------------------" << endl;
    cout << v;

}