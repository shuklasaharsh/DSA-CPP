#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

#define vect vector<pair<int,int> >
#define intVect vector<int>

intVect getDistance(vect v, pair<int, int> myLoc) {
    intVect ans;
    ans.resize(v.size());
    int count = 0;
    for (auto i:v) {
        ans[count] = pow((i.second - myLoc.second), 2);
        ans[count] = ans[count]/pow((i.first - myLoc.first), 2);
        ans[count] = sqrt(ans[count]);
        count++;
    }

    sort(ans.begin(), sort.end());

    return ans;
}

int main() {
    int cabs;
    cin >> cabs;
    vect v;
    v.resize(cabs);
    int i = 0;
    while (cabs--) {
        int x, y;
        cin >> x >> y;
        v[i++] = (make_pair(x, y));
    }
    int x, y;
    cin >> x >> y;
    pair<int, int> myLoc = make_pair(x,y);

    intVect res = getDistance(v, myLoc);

    for (auto i:res) {
        cout << i << endl;
    }
}