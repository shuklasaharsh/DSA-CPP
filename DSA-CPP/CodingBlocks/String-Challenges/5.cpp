#include <cstring>
#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    cin >> n;
    char str[n];

    for ( int i = 0; i < n; i++ ) {
        cin >> str[i];
    }

    bool isPalindrome = true;
    string output = "true";
    
    int len = strlen(str);
    for ( int i = 0 ; i < len/2; i++ ) {
        if (str[i]!=str[len-i-1]) {
            isPalindrome = false;
            output.clear();
            output.append("false");
        }
    }
    
    cout << output << endl;

}