#include <iostream>
#include <vector>

#define vect vector<int>

using namespace std;

int main() {
    int n;
    cin >> n;
    vect v;
    v.resize(n);
    int i = 0;
    while (n--) {
        cin >> v[i];
        i++;
    }

    cout << v.size() << endl << v.capacity() << endl << v.max_size() << endl;
    for (auto el:v) {
        cout << el << " "; 
    }
    cout << endl;
}