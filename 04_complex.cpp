/*
4. Define a class complex with two data members real and imag to represent real and imaginary
parts of a complex number. Write member functions

rpart() : to return the real part of a complex number
ipart() : to return the imaginary part of a complex number
add() : to add two complex numbers.
mul() : to multiply two complex numbers.
Write constructors with zero, one and two arguments to initialize objects. (This is an
example of polymorphism.)
*/
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }
    double rpart() { return real; }
    double ipart() { return imag; }
    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex mul(Complex c) {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4);
    Complex sum = c1.add(c2);
    Complex product = c1.mul(c2);

    cout << "C1: "; c1.display();
    cout << "C2: "; c2.display();
    cout << "Sum: "; sum.display();
    cout << "Product: "; product.display();
    return 0;
}
