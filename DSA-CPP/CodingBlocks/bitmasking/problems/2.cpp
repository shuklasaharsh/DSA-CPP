/*
We are given an array containg n numbers. All the numbers are present 
twice except for one number which is only present once. Find the unique number without taking any 
extra spaces and in linear time. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 2 2 3 3 4 
Sample Output
4
Explanation
4 is present only once
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int running_xor = 0;
    while (n--) {
        int temp;
        cin >> temp;
        running_xor = running_xor ^ temp;
    }

    cout << running_xor << endl;
}