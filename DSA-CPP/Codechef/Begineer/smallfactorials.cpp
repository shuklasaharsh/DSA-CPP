#include <iostream>
#include <vector>
using namespace std;
// Fails for 2^64

vector<int> f(vector<int> arr, int b) {
    int size = arr.size();
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        int x = (arr[i] * b + temp);
        temp = x / 10;
        arr[i] = x%10;
        // cout << arr[i] << " ";
    }
    while (temp != 0)
    {
        arr.push_back(temp % 10);
        temp = temp / 10;
    }
    return arr;
}


vector<int> computeArray(int number)
{
    vector<int> numberarray;
    while (number != 0)
    {
        numberarray.push_back(number % 10);
        number = number / 10;
    }

    return numberarray;
}

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++) {
        int number;
        cin >> number;
        vector <int> array = computeArray(number);

        int num = number -1;
        while (num>=1) {
            array = f(array, num);
            num--;
        }

        for (int i =array.size()-1; i >= 0; i--) {
            cout << array[i];
        }
        cout << endl;
    }
}