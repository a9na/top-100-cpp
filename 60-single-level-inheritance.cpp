// C++ Program to implement
// Single level inheritance
#include <iostream>
#include <string.h>

using namespace std;

class Person {
    int id;
    char name[100];

public:
    void set_p(int id, char* name)
    {
        strcpy(this->name, name);
        this->id = id;
    }

    void display_p()
    {
        cout << endl << id << "\t" << name << "\t";
    }
};

class Student : private Person {
    char course[50];
    int fee;

public:
    void set_s(int id, char* name, char* course, int fee)
    {
        set_p(id, name);

        strcpy(this->course, course);

        this->fee = fee;
    }

    void display_s()
    {
        display_p();

        cout << course << "\t" << fee << endl;
    }
};

main()
{
    Student s;
    char name[] = "XYZ";
    char course[] = "ABC";
    s.set_s(132451, name, course, 100000);
    s.display_s();
    return 0;
}
