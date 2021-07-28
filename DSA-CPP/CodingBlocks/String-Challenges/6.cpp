#include <iostream>
#include <vector>
#include <string>


using namespace std;

int length(string &str, int n, int k, char ch) {
    int maxInt = 1;
    int count = 0, l = 0, r = 0;
    while (r<n) {
        if (str[r]!=ch) {
            count++;
        }

        while (count > k) {
            if (str[l]!=ch) {
                count--;
            }
            l++;
        }
        maxInt = max(maxInt, r-l+1);
        r++;
    }
    return maxInt;
}

int solution(string &str, int n, int k) {
    int maxlen = 1;
    for (int i = 0; i < 2; i++) {
        maxlen = max(maxlen, length(str,n,k,i+'a'));
    }

    return maxlen;
}

int main() {

    // Inputs
    int replacements_allowed;
    cin >>replacements_allowed;
    cin.get();
    string a;
    getline(cin, a);
    
    // Processing
    cout << solution(a, a.length(), replacements_allowed) << endl;
    return 0;
}