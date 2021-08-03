#include <iostream>
#include <algorithm>
#include <vector>

#define vect vector<int>

using namespace std;

void sort_o_n(vect &v) {
    sort(v.begin(), v.end());
}

int main() {
    int n;
    cin >> n;
    vect v;
    int count1 = 0;
    int count2 = 0;
    int count0 = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 0) {
            count0++;
        } else if (temp == 1){
            count1++;
        } else if (temp == 2) {
            count2++;
        }
    }

    for (int i = 0; i < count0; i++) {
        cout << 0 << endl;
    }
    for (int i = 0; i < count1; i++) {
        cout << 1 << endl;
    }
    for (int i = 0; i < count2; i++) {
        cout << 2 << endl;
    }
}