/*
Print "lowercase" if user enters a character between 'a-z' , 
Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format
Single Character .

Constraints
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid
Explanation
-
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'A' && c <='Z') {
        cout << "UPPERCASE" << endl;
    } else if (c>='a' && c <='z') {
        cout << "lowercase" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}