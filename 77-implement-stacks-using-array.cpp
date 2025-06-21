// C++ Program to implement stacks using array
#include <iostream>
using namespace std;

// Maximum size of stack

#define MAX 100

class Stack {
private:
    int top;
    // Array to store stack elements
    int arr[MAX];

public:
    // Constructor to initialize top as -1
    Stack() { top = -1; }

    // Function to push an element to the stack
    void push(int x)
    {
        if (top == MAX - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    // Function to pop an element from the stack
    int pop()
    {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[top--];
    }

    // Function to check if stack is empty
    bool isEmpty() { return (top == -1); }

    // Function to return the top element of the stack
    int peek()
    {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Popped element: " << s.pop() << endl;
    cout << "Top element: " << s.peek() << endl;

    return 0;
}
