#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Insert at end
void insertEnd(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;

    if (head == nullptr)
    {
        // First node points to itself
        head = newNode;
        newNode->next = head;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head; // close the circle
}

// Display the list without do-while
void display(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    cout << head->data << " -> "; // print head first

    Node *temp = head->next;
    while (temp != head)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "(back to head)" << endl;
}

int main()
{
    Node *head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    display(head);

    return 0;
}
