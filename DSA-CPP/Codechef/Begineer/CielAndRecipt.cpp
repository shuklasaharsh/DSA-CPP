#include <iostream>

using namespace std;


int actualMain(int Parent) {
    return Parent--;
}

int main() {
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        static int temp;
        cin >> temp;
        cout << actualMain(Parent) << endl;
    }
}