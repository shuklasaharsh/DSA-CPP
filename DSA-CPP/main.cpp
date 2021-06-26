//
//  main.cpp
//  DSA-CPP
//
//  Created by Saharsh Shukla on 25/06/21.
//
#include "../DSA.h"

using namespace std;

ostream& operator << (ostream &o, vector<vector<int>> a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            o << a[i][j] << " ";
        }
        o << endl;
    }
    return o;
}

int main(int argc, const char * argv[]) {

    vector<vector<int>> arr;
    int rows, cols;
    
    cin >> rows >> cols;
    
    arr.resize(rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int temp;
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    cout << arr;
    return 0;
}
