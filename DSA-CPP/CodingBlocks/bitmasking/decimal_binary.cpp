#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<64> n2(n);
    cout << n2.to_string().substr() << endl;
    cout << n2.size() << endl;
    int index = n2.to_string().find('1');
    cout << n2.to_string().substr(index) << endl;
}