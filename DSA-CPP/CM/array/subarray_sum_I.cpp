#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int largestSum(int *arr, int n) {
    int result = INT_MIN;
    for (int i =0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int current = 0;
            for (int k = i; k <= j; k++) {
                current+=arr[k];
            }
            result = max(result, current);
        }
    }
    return result;
}

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    cout << largestSum(arr, n) << endl;
}