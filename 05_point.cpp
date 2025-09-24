/*
5. Define a class point with two data members xordinate and yordinate to represent all points
in the two dimensional plane by storing their x co-ordinate and y co-ordinate values. Write
member functions
dist(): to return the distance of the point from the origin.
slope(): to return the slope of the line obtained by joining this point with the origin.
Write constructors with zero, one and two arguments to initialize objects. Also write a friend
function to compute the distance between two points.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double a = 0, double b = 0) {
        x = a; y = b;
    }
    double dist() {
        return sqrt(x*x + y*y);
    }
    double slope() {
        if (x == 0) throw runtime_error("Undefined slope (vertical line)");
        return y / x;
    }
    friend double distance(Point p1, Point p2);
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    Point p1(3, 4), p2(6, 8);
    cout << "Distance of p1 from origin: " << p1.dist() << endl;
    cout << "Slope of p1: " << p1.slope() << endl;
    cout << "Distance between p1 and p2: " << distance(p1, p2) << endl;
    return 0;
}
