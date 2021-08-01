// Aggressive cows

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool canPlaceCows(vector<int> &v, int cows, int min) { 
    int last_cow = v[0];
    int count = 1;
    for (int i = 1; i < v.size(); i++) {
        if ( v[i]-last_cow>=min) {
            last_cow = v[i];
            count++;
            if (count == cows) {
                return true;
            }
        }
    }
    return false;
}

int __binary_search(vector<int> v, int cows) {
    int max_dis = v[v.size()-1] - v[0];
    cout << "max_dis: " << max_dis << endl;
    int s = 0;
    int e = max_dis;
    int ans = 0;
    while (s<=e) {
        int mid = (s+e)/2;
        bool isPossible = canPlaceCows(v, cows, mid);
        cout << "isPossible: " << isPossible << "\tmax_dis: "<< mid << endl;
        if (isPossible) {
            ans = mid;
            s=mid+1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

void actualMain() {
    vector<int> v;
    int cows, stalls;

    cin >> stalls >> cows;

    for (int i = 0; i < stalls; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int ans = __binary_search(v, cows);
    cout << ans << endl;



}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        actualMain();
    }
}