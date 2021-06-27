#include <iostream>
#include <vector>
#include <bits/stdc++>
using namespace std;

int binarysearch(int key, vector<int> arr) {
    int SP = 0;
    int EP = arr.size()-1;
    int CP = (SP+EP)/2;
    while (key != arr[CP]) {
        if (arr[CP] > key) {
            SP = CP;
        } else if (arr[CP] < key) {
            EP = CP;
        } else if (key == arr[CP]) {
            return CP;
        }
        CP = (EP+SP)/2;
    }
    return -1;
}

int main() {
    vector<int> arr{ 1,2,3,4,5,6,7,8,9 };
    cout << binarysearch(8,arr) << endl;
}