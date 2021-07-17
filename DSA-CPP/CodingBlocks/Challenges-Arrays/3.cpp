/*

Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format
The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.

Constraints
Length of the arrays should be between 1 and 1000.

Output Format
Print all the pairs of numbers which sum to target. Print each pair in increasing order.

Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3
Explanation
Find any pair of elements in the array which has sum equal to target element and print them.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define typeVector vector<int>

int main() {
    int target, n;
    typeVector v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cin >> target;
    sort(v.begin(), v.end());
    int i = 0;
    int j = v.size()-1;
    while (i <= j) {
        int currentSum = v[i]+v[j];
        if (currentSum > target) {
            j--;
        }
        if (currentSum < target) {
            i++;
        }
        if (currentSum == target) {
            cout << i+1 << " and " << j+1 << endl;
            i++;
            j--;
        }
    }
    return 0;
}