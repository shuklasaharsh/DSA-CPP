/*
Andrew was attempting a mathematics test where he needed to solve problems with factorials. 
One such problem had an answer which equaled 100! ,He wondered what would this number look like. 
He tried to calculate 100! On his scientific calculator but failed to get a correct answer. 
Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format
a single lined integer N

Constraints
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
Explanation
for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120
*/
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

int main() {
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