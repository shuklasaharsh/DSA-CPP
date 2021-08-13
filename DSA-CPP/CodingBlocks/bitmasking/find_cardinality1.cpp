#include <iostream>
#include <bitset>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define vect vector<int>

int findN_(int limit, vect numbers) {
    int prod = 1;
    for (auto i : numbers) {
        prod*=i;
    }

    return floor(limit/prod);
}

int getNumber(int limit, int n, vect v) {
    int bits_total = __builtin_popcount(n);
    int j = 0; //To iterator over an array
    int prod = 1;
    while (n > 0) {
        int bit = (n&1);
        if (bit) {
            prod*=v[j];
        }
        j++;
        n = (n>>1);
    }
    int ret_value = floor(limit/prod);
    return ((bits_total&1)==1)?ret_value:(-ret_value);
}

int binaryiter(vect v, int limit) {
    int end = 1<<(v.size());
    int start = 0;
    int sum = 0;
    while (start < end) {
        int a = getNumber(limit, start, v);
        cout << a << endl;
        sum+=a;
        start++;
    }

    return sum;
}

void test_case(int staticCount) {
    cout << "This is test case: " << staticCount << endl << "-----------------------" << endl;
    int limit;

    cin >> limit;
    vect numbers = {2,3,5};
    cout << binaryiter(numbers, limit) << endl;
}

int main() {
    int test;
    cin >>test;
    static int count = 1;
    while (test--) {
        test_case(count++);
    }
}