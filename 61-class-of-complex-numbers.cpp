// C++ Program to create a class of complex numbers
#include <bits/stdc++.h>
using namespace std;

// complex number datatype
struct c {
    double real;
    double img;
};

// complex clss
class Complex {
private:
    struct c num;

public:
    // constructors
    Complex() {}
    Complex(double real, double img)
    {
        num.img = img;
        num.real = real;
    }
    Complex(Complex& var)
    {
        num.img = var.num.img;
        num.real = var.num.real;
    }

    // utility functions
    void print()
    {
        cout << num.real << " + i" << num.img << endl;
    }

    double imag() { return num.img; }
    double real() { return num.real; }

    // overloaded operators
    Complex operator+(Complex& obj1)
    {
        Complex var;
        var.num.real = num.real + obj1.num.real;
        var.num.img = num.img + obj1.num.img;

        return var;
    }
    Complex operator-(Complex& obj1)
    {
        Complex var;
        var.num.real = num.real - obj1.num.real;
        var.num.img = num.img - obj1.num.img;

        return var;
    }

    Complex operator*(Complex& obj1)
    {
        Complex var;
        var.num.real = num.real * obj1.num.real
                       - num.img * obj1.num.img;
        var.num.img = num.real * obj1.num.img
                      + num.img * obj1.num.real;

        return var;
    }
};

// driver code
int main()
{
    Complex a(11, 12), b(5, 8);
    Complex c;
    c = a + b;

    a.print();
    b.print();
    c.print();

    return 0;
}
