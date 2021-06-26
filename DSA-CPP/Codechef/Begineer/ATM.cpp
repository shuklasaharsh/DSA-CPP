#include <iostream>

using namespace std;

float checkWithdrawal(float x, float y) {
    float check = 5;
    if (fmod(x,check)!=0) {
        return y;
    } else if (x > y) {
        return y;
    } else {
        return y-x-0.5;
    }
}
int main() {
    float x, y;
    cin >> x >> y;
    float result = checkWithdrawal(x,y);
    cout << result << " ";
}

