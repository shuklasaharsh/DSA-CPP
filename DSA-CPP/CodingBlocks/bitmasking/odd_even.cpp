// FOr a given number find if a number is odd or even
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;

    (a&1==1)?cout<<"Odd":cout<<"Even";
    cout << endl;

    // if (a&1 == 1) {
    //     cout << "Odd" << endl;
    // } else {
    //     cout << "Even" << endl;
    // }
}