/*
You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

Input Format
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

Constraints
1<=t<=100
1<=n<=1000
|Ai| <= 10000

Output Format
Print the maximum circular sum for each testcase in a new line.

Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
Explanation
Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)
*/

/*
My Algorithm:
Using Right rotate to rotate the vector and then proceed to find kadane's solution
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define typeVector vector<int>

using namespace std;


int kadaneVector(typeVector A) {
    int cs = 0;
    int ms = 0;
    for (int i = 0; i < A.size(); i++) {
        cs+=A[i];
        if(cs<0) {
            cs = 0;
        }
        ms = max(cs, ms);
    }

    return ms;
}


void actualMain() {
    int n;
    cin >> n;
    typeVector v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    typeVector res;
    for (int i =0; i < n; i++) {
        res.push_back(kadaneVector(v));
        rotate(v.begin(), v.begin()+v.size()-1, v.end());
    }
    sort(res.begin(), res.end());
    cout << res[res.size()-1] << endl;
}



using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        actualMain();
    }
}