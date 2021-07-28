/*
Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format
A single String S

Constraints
1 < = length of String < = 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.


*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char str[1000];

    cin.getline(str, 1000);
    int tracker = 0;
    for (int i = 0; i < strlen(str); i++) {
        int count = 1;
        int left = i+1;
        while(str[i]==str[left]) {
            count++;
            left++;
        }
        cout << str[i] << count;
        i = left-1;
        
    }

    cout << endl;
}