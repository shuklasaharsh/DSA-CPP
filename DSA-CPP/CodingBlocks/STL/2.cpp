// Binary search, LowerBound, UpperBoud

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// int freqFinder(char *str, int n, char *key) {
//     sort(str,str+n);
    
//     auto ub = upper_bound(str,str+n,key);
//     auto lb = lower_bound(str,str+n,key);
//     int result = lb-ub;
//     return result;
// }

int main() {
    int arr[] = {20,30,40,40,50,100,100,1100};
    char arr2[] = {'a', 'a','b', 'c', '\0'};
    int n = sizeof(arr)/sizeof(int);
    int nchar = sizeof(arr2)/sizeof(char);
    int key;
    cin >> key;

    bool present = binary_search(arr,arr+n,key);

    // (present==true)?cout<<"Present":cout<<"Absent";
    // cout << endl;
    auto lower = lower_bound(arr,arr+n, key);
    // cout << lower-arr << endl;

    auto upper = upper_bound(arr, arr+n, key);
    cout << "Frequency of " << key << ": "<<upper-lower << endl;


    auto upperchar = upper_bound(arr2,arr2+nchar,'a');
    auto lowerchar = lower_bound(arr2, arr2+nchar, 'a');
    cout << "Frequency of " << 'a' << ": "<<upperchar-lowerchar << endl;
    // int n;
    // cin >> n;
    // cin.get();
    // char *str = new char[n];
    // char *key = new char;
    // cin.getline(str,n);
    // cin>> key;

    // cout << str << key << endl;
}