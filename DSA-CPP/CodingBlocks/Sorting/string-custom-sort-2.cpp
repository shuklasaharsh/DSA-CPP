#include <bits/stdc++.h>

using namespace std;

#define vect vector<string>
#define vectf vector<pair<string, int>>

vect stringToken(string s) {
    vect tokens;
    stringstream check(s);
    string interm;
    while (getline(check, interm, ' ')) {
        tokens.push_back(interm);
    }

    return tokens;
}

bool custom_sort(string s1, string s2) {
    vect t1 = stringToken(s1);
    vect t2 = stringToken(s2);
    int tok1 = stoi(t1[1]);
    int tok2 = stoi(t2[1]);
    return tok1 > tok2;
}

bool check_limit(string s, int limit) {
    vect tok = stringToken(s);
    if (stoi(tok[1]) >= limit) {
        return true;
    }
    return false;
}

void custom_print(vect v, bool (*isValid)(string, int), int limit) {
    for (auto i:v) {
        if(isValid(i,limit)) {
            cout << i << endl;
        }
    }
}

int main() {
    vect v;
    int max_salary;
    cin >> max_salary;
    int n;
    cin >> n;
    cin.get();
    while (n--) {
        string temp;
        getline(cin, temp);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), custom_sort);

    custom_print(v,check_limit,max_salary);
    
}