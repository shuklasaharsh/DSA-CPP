#include <iostream>
#include <algorithm>
#include <vector>


#define typeVector vector<int>
using namespace std;

ostream &operator<<(ostream &o, typeVector &v) {
    for (auto i:v) {
        cout << i << " ";
    }
    cout << endl;

    return o;
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
    cout << v;
}