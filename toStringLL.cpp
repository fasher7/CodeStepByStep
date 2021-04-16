#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct ListNode
{
    int data = 0;
    ListNode *next = nullptr;
};

void printList(ListNode *n)
{
    while (n != nullptr)
    {
        cout << n->data << endl;
        n = n->next;
    }
    cout << endl;
}

void addValue(ListNode *&n, int data)
{
    if (n == nullptr)
    {
        n = new ListNode;
        n->data = data;
    }
    else
    {
        ListNode *current = n;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        ListNode *p = new ListNode;
        p->data = data;
        current->next = p;
    }
}

string toString(ListNode *&front)
{

    if (front == nullptr)
    {
        return "{}";
    }

    string make = "{";
    ListNode *curr1 = front;

    while (curr1->next != nullptr)
    {
        int x = curr1->data;
        make = make + to_string(x) + ", ";
        curr1 = curr1->next;
    }
    int x = curr1->data;
    make = make + to_string(x) + "}";
    curr1 = curr1->next;

    return make;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 10);
    addValue(front1, 20);
    addValue(front1, 30);
    cout << toString(front1);

    return 0;
}
