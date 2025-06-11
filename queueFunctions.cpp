#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front= " << q.front() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}