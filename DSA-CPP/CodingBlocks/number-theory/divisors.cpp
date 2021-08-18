#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>
using namespace std;

vector<pair<int, int>> factors;

void computeFactors(int n) {
    int count;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            count = 0;
            while (n%i == 0) {
                count++;
                n= n /i;
            }
            factors.push_back(make_pair(i, count));
        }
    }
    if (n!=1) {
        factors.push_back(make_pair(n, 1));
    }
}

void printDivisors(vector<pair<int, int> > v) {
    for (auto p:v) {
        int count = p.seond;
        while (count--) {
            
        }
    }
}

int main() {
    int n;
    cin >> n;
    // printFactors(n);
    computeFactors(n);
    for (auto i:factors) {
        cout << i.first << "^" << i.second << endl;
    }

    printDivisors(factors);

}