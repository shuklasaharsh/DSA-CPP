// FIND
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int arr[] = {1,2,3,4,5};
    int key, n;
    n= sizeof(arr)/sizeof(int);
    cin >> key;

    auto it = find(arr,arr+n,key);
    int index = it - arr;
    // cout << index << endl;

    (index==n)?cout<<key<<" Not present"<<endl:cout<<key<<" Found at "<<index<<endl;
}