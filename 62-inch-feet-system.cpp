// C++ Program to create a class of inchFeet length system
#include <bits/stdc++.h>
using namespace std;

// inch-feet length system datatype
struct c {
    double feet;
    double inch;
};

// inchFeet class
class inchFeet {
private:
    struct c length;

public:
    // constructors
    inchFeet() {}
    inchFeet(double feet, double inch)
    {
        length.inch = inch;
        length.feet = feet;
    }
    inchFeet(inchFeet& var)
    {
        length.inch = var.length.inch;
        length.feet = var.length.feet;
    }

    // utility functions
    void print()
    {
        cout << length.feet << " feet and " << length.inch
             << " inches" << endl;
    }

    double inches() { return length.inch; }
    double feet() { return length.feet; }

    // overloaded operators
    inchFeet operator+(inchFeet& obj1)
    {
        inchFeet var;
        var.length.feet = length.feet + obj1.length.feet;
        var.length.inch = length.inch + obj1.length.inch;
        if (var.length.inch >= 12.0) {
            var.length.feet++;
            var.length.inch - 12.0;
        }

        return var;
    }
    inchFeet operator-(inchFeet& obj1)
    {
        inchFeet var;
        struct c temp = length;
        if (temp.feet > obj1.length.feet) {
            if (temp.inch < obj1.length.inch) {
                temp.feet--;
                temp.inch += 12;
            }
            var.length.feet = temp.feet - obj1.length.feet;
            var.length.inch = temp.inch - obj1.length.inch;
        }
        else {
            cout << "Negative Length is not Possible\n";
        }
        return var;
    }
};

// driver code
int main()
{
    inchFeet a(11, 4), b(5, 8);
    inchFeet c;
    c = a - b;

    a.print();
    b.print();
    c.print();

    return 0;
}
