#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

class Car {
public:
    string name;
    int x_cord;
    int y_cord;
    pair<int, int> cords;
    float distanceFromOrigin;

    Car() {

    }

    Car(string name, int x_cord, int y_cord) {
        this->name = name;
        this->x_cord = x_cord;
        this->y_cord = y_cord;
        this->cords.first = x_cord;
        this->cords.second = y_cord;
        this->distanceFromOrigin = pow(pow(y_cord,2)/pow(x_cord,2), 0.5);
    }

    void acceptEntry() {
        getline(cin, this->name);
        cin >> this->x_cord;
        cin >> this->y_cord;
        this->cords.first = this->x_cord;
        this->cords.second = this->y_cord;
        cout << "Distance from Origin: "<<pow(pow(this->y_cord,2)/pow(this->x_cord,2), 0.5) << endl;
        this->distanceFromOrigin = pow(pow(this->y_cord,2)/pow(this->x_cord,2), 0.5);

    }
    friend ostream &operator<< (ostream &o, Car &c);
};

ostream& operator<<(ostream &o, Car &c) {
    o << c.name << endl;
    o << "X: " << c.x_cord << " Y: " << c.y_cord << endl;
    o << "---------------------------------";
    return o;
}

bool cmp_custom(Car &c1, Car &c2) {
    cout << c1.distanceFromOrigin << " " << c2.distanceFromOrigin << endl;
    if (c1.distanceFromOrigin > c2.distanceFromOrigin) {
        return true;
    }
    if (c1.distanceFromOrigin == c2.distanceFromOrigin) {
        return c1.name > c2.name;
    }
    return false;
}

int getDistanceFromOrigin(int x, int y) {
    return pow(pow(y,2)/pow(x,2), 0.5);
}

int main() {

    Car c1("Elantra", 1, 0);
    Car c2("Verna", 2, 0);
    Car c3("XUV500", -1, 0);
    cout << c1.distanceFromOrigin << " " << c2.distanceFromOrigin << " " << c3.distanceFromOrigin << endl;
    vector<Car> c;
    c.resize(3);
    c[0] = c1;
    c[1] = c2;
    c[2] = c3;
    cout << "calling Sort" << endl;
    sort(c.begin(), c.end(), cmp_custom);
    
    for (auto i:c) {
        cout << i << endl;
    }
    return 0;
}