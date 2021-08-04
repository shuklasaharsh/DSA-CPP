#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define lint long long

using namespace std;

lint binary_search_custom(lint n, lint k) {
    lint start, end;
    start = 0;
    end = n;
    lint ans = -1;
    while (start < end) {
        lint mid = (start+end)/2;
        if(mid == n) {
            return mid;
        } else if (mid > n) {
            start = mid+1;
        } else if (mid < n) {
            ans = mid;
            end = mid-1;
        }
    }
    return ans;
}

int testcase(int test) {
    cout << "Left: " << test << endl;
    lint n, k;
    cin >> n >> k;
    // cout << sq_root(n,k) << endl;
    // cout << (1/k)*exp(log(n)) << endl;
    return 0;
    
}

int main() {
    int test;
    cin >>test;
    while (test--) {
        testcase(test);
    }
    return 0;
}