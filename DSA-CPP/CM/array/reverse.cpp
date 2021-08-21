#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    reverse(arr, arr + n);

    for (auto i:arr) {
        cout << i << endl;
    }
}