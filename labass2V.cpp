#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    //default constructor 
    Distance() : feet(0), inches(0) {}
    //parametrized constructor
    Distance(int ft, int in) : feet(ft), inches(0) {
        feet += in / 12;
        inches = in % 12;
    }
    void inpdis() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
        feet += inches / 12;
        inches = inches % 12;
    }
    void display() const {
        cout << feet << " feet, " << inches << " inches";
    }
    friend int compare(const Distance& d1, const Distance& d2);
};
//calling friend function outside the class 
//can be accessed here
int compare(const Distance& d1, const Distance& d2) {
    int totalInches1 = d1.feet * 12 + d1.inches;
    int totalInches2 = d2.feet * 12 + d2.inches;
    if (totalInches1 > totalInches2)
        return 1;
    else if (totalInches1 < totalInches2)
        return -1;
    else
        return 0;
}
int main() {
    cout << "Navigation System - Distance Comparison" << endl;
    Distance location1, location2;
    cout << "\nEnter distance for Location 1:" << endl;
    location1.inpdis();
    cout << "\nEnter distance for Location 2:" << endl;
    location2.inpdis();
    cout << "\nResults:" << endl;
    cout << "Location 1: ";
    location1.display();
    cout << endl;
    cout << "Location 2: ";
    location2.display();
    cout << endl;
    int result = compare(location1, location2);
    if (result > 0) {
        cout << "\nLocation 1 is farther than Location 2" << endl;
    } else if (result < 0) {
        cout << "\nLocation 2 is farther than Location 1" << endl;
    } else {
        cout << "\nBoth locations are at the same distance" << endl;
    }
    return 0;
}

