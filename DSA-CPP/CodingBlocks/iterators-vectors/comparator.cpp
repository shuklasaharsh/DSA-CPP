#include <bits/stdc++.h>
#include <list>

using namespace std;

class Book {
public:
    string name;
    int price;
    Book() {

    }
    Book(string name, int price) {
        this->name = name;
        this->price = price;
    }

};

class BookCompare {
public:
    bool operator() (Book b1, Book b2) {
        return (b1.name==b2.name?true:false);
    }
};

template<class ForwardIterator, class T, class Compare>
ForwardIterator searchThis(ForwardIterator start, ForwardIterator end, T key, bool *found, Compare cmp) {
    while (start!=end) {
        if(cmp(*start, key)) {
            *found = true;
            return start;
        }
        start ++;
    }
    return end;
}

ostream &operator<<(ostream &o, Book &b) {
    o << b.name << " " << b.price;
    return o;
}

int main() {
    Book b1("CPP", 100);
    Book b2("JAVA1", 120);
    Book b3("NODE", 125);
    Book key("CPP", 580);

    BookCompare cmp;
    
    if (cmp(b1, key)) {
        cout << "Book found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    list<Book> library;
    library.push_back(b1);
    library.push_back(b2);
    library.push_back(b3);
    bool found = false;
    cout << *searchThis(library.begin(), library.end(), key, &found, cmp) << endl;

}