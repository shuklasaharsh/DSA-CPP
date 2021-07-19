/*
Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input M, the size of second array and take M more inputs and store that in second array. 
Write a function that returns the sum of two arrays. Print the value returned.

Input Format
Constraints
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END
Explanation
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here )
*/

#include <iostream>
#include <vector>

using namespace std;

#define typeVector vector<int>

typeVector sum(typeVector u, typeVector v) {

}

int main() {
    typeVector u;
    typeVector v;
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int inp;
        cin >> inp;
        u.push_back(inp);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        v.push_back(inp);
    }

    int diff = abs(v.size()-u.size());
}