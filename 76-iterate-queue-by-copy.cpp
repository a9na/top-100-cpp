// C++ program to iterate a
// STL Queue by Creating
// copy of given queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    // Inserting elements in queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // Copy queue
    queue<int> copy_queue = q;

    cout << "Queue elements :\n";

    while (!copy_queue.empty()) {
        cout << copy_queue.front() << " ";

        copy_queue.pop();
    }

    return 0;
}
