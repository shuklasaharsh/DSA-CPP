#include <iostream>

using namespace std;

int getSum(int *prefix, int start, int end)
{
    return prefix[end] - prefix[start - 1];
}

int largestSum(int *arr, int _size_of_array__)
{
    int *prefix = new int[_size_of_array__];
    prefix[0] = arr[0];
    for (int i = 1; i <= _size_of_array__; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
    }
    int current_sum = 0, max_sum = INT_MIN;
    // Prefix Sum Array is completed

    for (int i = 0; i < _size_of_array__; i++)
    {
        for (int j = i; j < _size_of_array__; j++)
        {
            current_sum = (i > 0) ? prefix[j] - prefix[i - 1] : prefix[j] - prefix[0];
            max_sum = max(current_sum, max_sum);
        }
    }

    return max_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << largestSum(arr, n) << endl;
}