#include <iostream>
#include <vector>

using namespace std;

int numoffours(int number) {
    int count = 0;
    while(number!=0) {
        
        if (number%10 == 4) {
            count++;
        }
        number = number/10;
    }
    return count;
}

int main() {
    int TESTCASES;
    cin >> TESTCASES;
    for (int i = 0; i < TESTCASES; i++) {
        int temp;
        cin >> temp;
        cout << numoffours(temp) << endl;
    }
    return 0;
}