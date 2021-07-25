/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
*/

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

#define TOTAL_ASCII 256

char getMax(char *str) {
    int count[TOTAL_ASCII] = {0}; //This is an array that maintains a count of all strings
    int len = strlen(str);
    int max = 0;
    char result;
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
    return result;
}

int main(void) {
    char str[1000];
    cin.getline(str,1000);
    cout << getMax(str) << endl;
}