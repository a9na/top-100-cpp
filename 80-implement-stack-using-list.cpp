// C++ Program to implement
// stack using list
#include <bits/stdc++.h>

using namespace std;

// Template declared
template <typename T> class Stack {
public:
    list<T> l;
    int cs = 0;
    // current size of the stack

    // pushing an element into the stack
    void push(T d)
    {
        cs++;
        // increasing the current size of the stack
        l.push_front(d);
    }

    // popping an element from the stack
    void pop()
    {
        if (cs <= 0) {
            // cannot pop us stack does not contain an
            // elements
            cout << "Stack empty" << endl;
        }
        else {
            // decreasing the current size of the stack
            cs--;
            l.pop_front();
        }
    }

    // if current size is 0 then stack is empty
    bool empty() { return cs == 0; }

    // getting the element present at the top of the stack
    T top() { return l.front(); }
    int size()
    {
        // getting the size of the stack
        return cs;
    }

    // printing the elements of the stack
    void print()
    {
        for (auto x : l) {
            cout << x << endl;
        }
    }
};
int main()
{
    // Inserting elements in stack
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Size: " << s.size() << endl;
    cout << "Top element:" << s.top() << endl;
    s.pop();
    cout << "Top element:" << s.top() << endl;
    s.pop();
    cout << "Top element:" << s.top() << endl;
    cout << "Size:" << s.size() << endl;
    return 0;
}
