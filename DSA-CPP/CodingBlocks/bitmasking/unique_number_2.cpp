#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int find_xor(vector<int> v, int init=0) {
    for (auto i:v) {
        init=init^i;
    }
    return init;
}

int find_number_with_bit(vector<int> v, int mask) {
    int number = 0;
    int running_xor = 0;
    for (auto i:v) {
        if ((i&mask) == mask) {
            number = i;
            running_xor = running_xor^number;
        }
    }
    return running_xor;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    int running_xor = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        running_xor = running_xor^v[i];
    }
    
    bitset<64> running_xor2(running_xor);

    int pos = running_xor2._Find_first();

    int mask = 1<<pos;
    // cout << mask << endl;
    int a = find_number_with_bit(v, mask);
    int b = running_xor^a;

    (a<b?cout << a << " " << b << endl:cout << b << " " << a << endl);

}