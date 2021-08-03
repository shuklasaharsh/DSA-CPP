#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

#define vect vector<string>

using namespace std;

bool cmp(string s1, string s2) {
    return true;
}

int main() {
    int n;
    cin >> n;
    cin.get();
    vect v;
    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin, temp, '\n');
        v.push_back(temp);
    }

    auto something = v[0].compare(v[1]);
    cout << something << endl;
    // for (auto i:v) {
    //     cout << i << endl;
    // }
}