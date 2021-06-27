#include <iostream>
#include <cmath>

using namespace std;

// This file will contain all operations on array as well as the abstract data type
// TODO: Commit

class Array {
public:
    int *A;
    int size;
    int length;
    Array(int size) {
        this->size = size;
        A = new int[size];
    }
    void create() {
        cin >> this->length;
        for (int i = 0; i < this->length; i++) {
            cin >> A[i];
        }
        cout << "Array of size: " << this->size << " is created with length: " << this->length << endl;
    }

    void append(int value) {
        this->length++;
        A[length] = value;
    }

    ~Array() {
        cout << "Deleting Array" << endl;
        delete[] A;
    }

};

ostream &operator << (ostream& o, Array &arr) {
    for (int i = 0; i < arr.length; i++) {
        o << arr.A[i] << " ";
    }
    o << endl;
    return o;
}

int main(void) {
    Array arr(10);
    arr.create();
    cout << arr;
    cout << arr;
}
