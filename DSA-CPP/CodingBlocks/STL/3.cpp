/*
Money change problem

Given a denomination and the notes,

find out the minimum number of notes required to represent an amount of money.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getNumberOfNotes(vector<int> notes, int amount) {
    int count = 0;
    while (amount!=0) {
        auto ub = upper_bound(notes.begin(), notes.end(), amount);
        // cout << notes[ub-notes.begin()-1]<<endl;
        amount=amount-notes[ub-notes.begin()-1];
        count++;
    }

    return count;
}

int main() {
    vector<int> notes = {1,2,5,10,20,50,100,200,500,2000};
    int amount;
    cin >> amount;
    cout << getNumberOfNotes(notes, amount) << endl;
}