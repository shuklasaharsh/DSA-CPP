#include <iostream>
#include <vector>

using namespace std;

void insertsort(vector <int> &arr, int insert_element_) {
    int i = arr.size()-1;
    arr.resize(arr.size()+1);
    while(i>=0 && arr[i]>insert_element_) {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = insert_element_;
}

bool isSorted(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        if (arr[i]>arr[i+1]) {
            return false;
        }
    }
    return true;
}

template <class T>
ostream &operator << (ostream &o, vector<T> v) {
    for (int i = 0; i < v.size(); i++) {
        o << v[i] << ", ";
    }
    o << endl;

    return o;
}

int main(int argc, const char * argv[]) {
    vector <int> arr {1, 2, 3, 6, 9, 300};
    // cout << arr.size() << endl;
    insertsort(arr, 0);
    cout << isSorted(arr) << endl;
    cout << arr;
}