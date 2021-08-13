/*
We are given an array containg n numbers. 
All the numbers are present twice except for two numbers which are present only once. 
Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number
*/

#include <iostream>
#include <vector>

using namespace std;

int findFirst(vector<int> v, int number) {
    int running_xor = 0;
    for (auto i:v) {
        if ((i&number)==number) {
            running_xor = running_xor^i;
        } 
    }
    return running_xor;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    int running_xor = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        running_xor = running_xor ^ v[i];
    }
    int a = findFirst(v, running_xor);
    int b = running_xor^a;
    (a>b)?cout << b << " " << a << endl:cout << a << " "<<b << endl;
}