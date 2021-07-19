/*
You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

Input Format
First line contains integer t which is number of test case.
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated 
integers denoting the elements of the array A .

Constraints
1<=t<=100

1<=m<=100

1<=A[i]<=10^5

Output Format
Print the largest value.

Sample Input
1
4
54 546 548 60
Sample Output
6054854654
Explanation
Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define typeVector vector<string>

int comparator(string X, string Y) {
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX)>0?1:0;
}

void Largest(typeVector arr) {
    sort(arr.begin(), arr.end(), comparator);
    for (auto i:arr) {
        cout << i;
    }
    cout << endl;
}

void testcase() {
    int n;
    cin >> n;
    typeVector v;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
    Largest(v);
}

int main() {
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        testcase();
    }
}