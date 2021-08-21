#include <iostream>

using namespace std;

void printSubarrays(int *arr, int _sizeofArray)
{
    for (int i = 0; i < _sizeofArray; i++)
    {
        for (int j = i; j < _sizeofArray; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ", ";
            }
            cout << "END"<<endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printSubarrays(arr, n);
}