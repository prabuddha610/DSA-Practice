#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int sz)
    {
        arr = new int[sz];
        front = rear = -1;
        size = sz;
    }

    // Add item
    void enqueue(int val)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is Full\n";
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = val;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    // Remove item
    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Removed: " << arr[front] << endl;
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    // Display queue
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue contents: ";
        if (rear >= front)
        {
            for (int i = front; i <= rear; ++i)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = front; i < size; ++i)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; ++i)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue Q(5);
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);
    Q.display();

    Q.dequeue();
    Q.dequeue();
    Q.display();

    Q.enqueue(60);
    Q.display();
    return 0;
}
