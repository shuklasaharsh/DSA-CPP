#include <iostream>

using namespace std;

void solution(int a, int b) {
    if (a==b) {
        cout << "=" << endl;
    }
    if (a>b) {
        cout << ">" << endl;
    }
    if (a<b) {
        cout << "<" << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while (test>0) {
        int a, b;
        cin >> a >> b;
        solution(a,b);
        test--;
    }
}