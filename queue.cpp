#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Display front element
    cout << "Front element: " << q.front() << endl;

    // Dequeue an element
    q.pop();
    cout << "Front after one pop: " << q.front() << endl;

    // Display size
    cout << "Queue size: " << q.size() << endl;

    // Empty the queue
    while (!q.empty())
    {
        cout << "Removing: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
