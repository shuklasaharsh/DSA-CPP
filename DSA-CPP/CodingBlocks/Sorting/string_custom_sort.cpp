#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

#define vect vector<string>

using namespace std;

bool cmp(string s1, string s2) {
    if (s1.length() > s2.length()) {
        return true;
    } else if (s1.length() == s2.length()) {
        auto comp = s1.compare(s2);
        if (comp > 0) {
            return true;
        }
        if (comp < 0) {
            return false;
        }
    }
    return false;
}

bool my_compare(string a, string b)
{
    // Check if a string is present as
    // prefix in another string, then
    // compare the size of the string
    // and return the larger size
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
  
        return a.size() > b.size();
  
    // Else return lexicographically
    // smallest string
    else
        return a < b;
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

    sort(v.begin(), v.end(), my_compare);

    // cout << (int)v[0].compare(v[1]) << endl;
    for (auto e:v) {
        cout << e << endl;
    }
}