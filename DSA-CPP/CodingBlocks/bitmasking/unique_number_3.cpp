#include <iostream>
#include <bitset>
#include <vector>

#define vect vector<int>
#define binary bitset<64>
#define vect_binary vector<bitset<64>>

using namespace std;

int find_sum(vect_binary v, int pos) {
    int sum = 0;
    for (auto i:v) {
        sum+=i[pos];
    }

    return sum;
}

int convert_to_decimal(vect v) {
    int power = 1, result = 0;
    for (int i = 0; i < 64; i++) {
        result+=v[i]*power;
        power*=2;
    }

    return result;
}

vect_binary convert_to_binary(vect v) {
    vect_binary ret;
    for (auto i:v) {
        binary temp(i);
        ret.push_back(temp);
    }

    return ret;
}

vect find_sum_bit(vect_binary v) {
    vect v_ret(64);
    for (int i = 0; i < 64; i++) {
        v_ret[i] = find_sum(v, i);
    }
    for (int i = 0; i < 64; i++) {
        v_ret[i] = v_ret[i]%3;
    }

    return v_ret;
}

int main() {
    int n;
    cin >> n;
    vect v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vect_binary v2 = convert_to_binary(v);

    vect result = find_sum_bit(v2);
    int answer = convert_to_decimal(result);
    cout << answer << endl;


}