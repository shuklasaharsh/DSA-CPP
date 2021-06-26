#include <iostream>
#include <vector>

using namespace std;

void recursive(int n) {
    if (n>0) {
        cout << n << endl;
        recursive(n-1);
    } else {
        return;
    }
}

void recursion2(int n) {
    if (n > 0) {
        recursion2(n-1);
        cout << n << endl;
    } else {
        return;
    }
}

int main(void) {
    recursive(3);
    recursion2(3);
}