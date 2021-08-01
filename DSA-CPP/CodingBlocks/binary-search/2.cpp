//Book Allocation

 #include <iostream>
 #include <vector>
 #include <algorithm>

#define typeVector vector<int>
using namespace std;

int sum(typeVector v) {
    int sum = 0;
    for (auto i:v) {
        sum+=i;
    }
    return sum;
}

bool isPossible(int books, int students, typeVector pages, int __pages) {
    int studentUsed = 1;
    int pagesReading = 0;

    for (int i = 0; i < books; i++) {
        if (pagesReading + pages[i]>__pages) {
            studentUsed++;

            pagesReading = pages[i];
            if (studentUsed>students) {
                return false;
            }
        } else {
            pagesReading+=pages[i];
        }
    }
    return true;
}

int findMinPages(int books, int students, typeVector pages) {
    if (books < students) {
        return -1;
    }
    int s = pages[pages.size()-1];
    int e = sum(pages);
    int ans = __INT_MAX__;
    while(s<=e) {
        int __pages = (s+e)/2;
        if (isPossible(books, students, pages, __pages)) {
            ans = min(ans, __pages);
            cout << ans << endl;
            e = __pages - 1;
        } else {
            s = __pages + 1;
        }

    }
    return ans;
}

void actualMain() {
    int books, students;
    cin >> books/* n */, students/* m */;
    typeVector v;
    for (int i = 0; i < books; i++) {
        int pages;
        cin >> pages;
        v.push_back(pages);
    }
    cout << findMinPages(books, students, v) << endl;
}

 int main() {
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        actualMain();
    }
 }