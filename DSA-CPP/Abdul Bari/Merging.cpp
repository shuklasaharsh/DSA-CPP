#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// class struct_array {
//     public:
//     int *arr;
//     int size;
//     int length;
//     struct_array(int size, int length = 0) {
//         this->arr = new int[size];
//         this->size = size;
//         this->length = length;
//         cout << "Empty Array Created in heap" << endl;
//     }

// };
template <class T> 
ostream& operator<< (ostream& o, vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        o << v[i] << " ";
    }
    return o;
}

vector<int> Union(vector<int> A, vector<int> B) {
    vector<int> C = A;
    for (auto i:B) {
        for (auto j:C) {
            if (i!=j) {
                C.push_back(i);
            }
        }
    }
    return C;
}
int main() {
    vector<int> A {1,2,3};
    vector<int> B {2,5,6};
    vector<int> C = Union(A,B);
    cout << C << endl;
}