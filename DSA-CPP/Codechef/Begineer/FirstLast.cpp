#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int sumOfDigits(int num) {
    vector<int> a;
    while(num!=0) {
        int temp = num%10;
        num = num/10;
        a.push_back(temp);
    }
    int sum = a[0] + a[a.size()-1];
    return sum;
}

int main(void) {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i = 0; i < TESTCASES; i++) {
        int number;
        cin >> number;
        cout << sumOfDigits(number) << endl;
    }
}