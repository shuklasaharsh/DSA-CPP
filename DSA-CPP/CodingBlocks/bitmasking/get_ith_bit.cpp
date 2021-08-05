#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n , i;
    cin >> n >> i;
    int mask = (1<<i);
    int bit = (n&mask)>0?1:0;
    cout << mask << endl;
    cout << bit << endl;

}