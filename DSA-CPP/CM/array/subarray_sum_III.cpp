#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int arr[] = {3,-2,3,4,5,6,-98, 3};
    int n = sizeof(arr)/sizeof(n), current_sum = 0, sum = 0;
    int s = 0, e = n;
    for (int i = 0; i < n; i++) {
        current_sum+=arr[i];
        if (current_sum<0) {
            current_sum = 0;
        }
        sum = max(current_sum, sum);
    }

    cout << sum << endl;
}