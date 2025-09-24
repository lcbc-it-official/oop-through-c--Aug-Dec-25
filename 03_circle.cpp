/*
3. Define a class circle to represent circles. Add a data member radius to store the radius of a
circle. Write member functions area() and perimeter() to compute the area and perimeter of
a circle.
*/
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r = 0) {
        radius = r;
    }
    double area() {
        return 3.14159 * radius * radius;
    }
    double perimeter() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    Circle c(r);
    cout << "Area: " << c.area() << endl;
    cout << "Perimeter: " << c.perimeter() << endl;
    return 0;
}
