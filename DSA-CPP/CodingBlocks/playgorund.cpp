#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

#define binary bitset<64>


int main() {

    int a, b;

    cin >> a >> b;
    binary c(a+b);
    cout << c << endl;

    

    return 0;
}