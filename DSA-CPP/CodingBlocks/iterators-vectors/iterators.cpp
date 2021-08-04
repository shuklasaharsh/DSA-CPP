#include <bits/stdc++.h>
#include <list>

using namespace std;

template<class ForwardIterator, class T>
ForwardIterator searchThis(ForwardIterator start, ForwardIterator end, T key, bool *found) {
    while (start!=end) {
        if(*start == key) {
            *found = true;
            return start;
        }
        start ++;
    }
    return end;
}

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    bool found = false;
    auto it = searchThis(l.begin(), l.end(), 5, &found);
    if (found) {
        cout << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

}