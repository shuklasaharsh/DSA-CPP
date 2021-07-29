// Frequency finder

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// void sort(string &str) {
//     sort(str.begin(), str.end());
// }

int freqFinder(string str, string key) {
    auto it = str.begin();
    sort(str.begin(), str.end());
    auto ub = upper_bound(it, it+str.length()-1, key[0]);
    auto lb = lower_bound(it, it+str.length()-1, key[0]);
    return ub-lb;
}

int main() {
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    cout << freqFinder(str1, str2) << endl; // We now find the frequency of a given string Log(n)
    
    // sort(str1.begin(), str1.end());

    // cout << str1 << endl;
    // auto it = str1.begin();
    // auto lb = lower_bound(it, it+str1.length()-1, str2[0]);
    // auto index = lb - it;
    // // cout << index << endl;
    // auto ub = upper_bound(it, it+str1.length()-1, str2[0]);

    // auto occur = ub - lb;

    // cout << occur << endl;
    // auto ub = upper_bound(str1.begin(), str1.end(), str2);

    // cout << lb << endl;    
    

}