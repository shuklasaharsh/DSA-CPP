#include <iostream>
#include <cmath>

using namespace std;


int main() {
    long long n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp%k == 0) {
            count++;
        } 
    }
    cout << count;
}