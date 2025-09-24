/*
1. Define a class named triangle to represent a triangle using the lengths of the three sides.
Write a constructor to initialize objects of this class, given the lengths of the sides. Also
write member functions to check
(a) if a triangle is isosceles
(b) if a triangle is equilateral
Write a main function to test your functions.
*/
#include <iostream>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z) {
        a = x; b = y; c = z;
    }

    bool isIsosceles() {
        return (a == b || b == c || a == c);
    }

    bool isEquilateral() {
        return (a == b && b == c);
    }
};

int main() {
    double x, y, z;
    cout << "Enter three sides of triangle: ";
    cin >> x >> y >> z;

    Triangle t(x, y, z);
    cout << "Isosceles: " << (t.isIsosceles() ? "Yes" : "No") << endl;
    cout << "Equilateral: " << (t.isEquilateral() ? "Yes" : "No") << endl;
    return 0;
}
