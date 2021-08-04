#include <bits/stdc++.h>

using namespace std;

#define vect vector<long long>

long long binary_search_custom(vect v, long long key) {
    int s = 0;
    int e = v.size()-1;
    while (s<=e) {
        long long mid = (s+e)/2;
        long long element = v[(s+e)/2];

        if (element > key) {
            s = mid+1;
        }
        if (element < key) {
            e = mid-1;
        }
        if (element==key) {
            return mid;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vect v;
    while (n--) {
        long long temp;
        cin >> temp;
        v.push_back(temp);
    }
    long long key;
    cin >> key;

    cout << binary_search_custom(v, key) << endl;
}