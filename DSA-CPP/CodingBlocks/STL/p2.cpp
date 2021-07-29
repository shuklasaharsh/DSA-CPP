#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

void actual_main() {
    int activities;
    cin >> activities;
    pair<int, int> current_activity = {0, 0};
    // cout << current_activity.first << " " << current_activity.second << endl;
    int count = 0;
    for (int i = 0; i < activities; i++) {
        int temp1;
        int temp2;
        cin >> temp1 >> temp2;
        if (current_activity.second <= temp1) {
            count++;
            current_activity.first = temp1;
            current_activity.second = temp2;
        }
    }
    cout << count << endl;
    
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        actual_main();
    }

    return 1;
}