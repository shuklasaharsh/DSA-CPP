#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void getSubsets(int n, string s) {
    int j = 0;
    while (n>0) {
        int bit = (n&1);
        if (bit) {
            cout << s[j];
        }
        j++;
        n= n>>1;
    }
    cout << endl;
}

void binary_iter(string str) {
    int s = 0;
    int power = str.length();
    int e = 1<<power;
    while (s<=e) {
        getSubsets(s, str);
        s++;
    }

}

int main() {
    string s;
    // getline(cin, s);
    // binary_iter(s);

    getSubsets(1, "ABC");
    getSubsets(2, "ABC");
    getSubsets(3, "ABC");
}