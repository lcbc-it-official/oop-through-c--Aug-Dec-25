/*
2. Define a structure employee with the following specifications.
empno: integer
ename: 20 characters
basic, hra, da : float
calculate() : a function to compute net pay as basic+hra+da with float return type.
getdata() : a function to read values for empno, ename, basic, hra, da.
dispdata() : a function to display all the data on the screen
Write a main program to test the program.
*/
#include <iostream>
#include <cstring>
using namespace std;

struct Employee {
    int empno;
    char ename[20];
    float basic, hra, da;

    float calculate() {
        return basic + hra + da;
    }

    void getdata() {
        cout << "Enter employee number: ";
        cin >> empno;
        cout << "Enter employee name: ";
        cin >> ename;
        cout << "Enter basic, hra, da: ";
        cin >> basic >> hra >> da;
    }

    void dispdata() {
        cout << "Employee No: " << empno << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Basic: " << basic << ", HRA: " << hra << ", DA: " << da << endl;
        cout << "Net Pay: " << calculate() << endl;
    }
};

int main() {
    Employee e;
    e.getdata();
    e.dispdata();
    return 0;
}
