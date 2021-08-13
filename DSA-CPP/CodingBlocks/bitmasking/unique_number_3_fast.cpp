#include <iostream>

using namespace std;

int main() {
    int count[64] = {0};
    int n = 0;
    cin >> n;
    int no;
    for (int i = 0; i < n; i++) {
        cin >> no;
        int j = 0;
        while(no>0) {
            int last_bit = (no&1);
            count[j] += last_bit;
            j++;
            no = no >> 1;
        }
    }

    for (int i = 0; i < 64; i++) {
        count[i] = count[i] % 3;
    }

    int power = 1;
    int ans = 0;
    for (int i = 0; i < 64; i++) {
        ans+=count[i]*power;
        power*=2;
    }
    cout << ans << endl;
}