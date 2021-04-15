#include <iostream>
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

bool isSorted(ListNode *front)
{
    ListNode *curr = front;
    bool checking = true;

    if (front == nullptr)
    {
        return checking;
    }

    while (curr->next != nullptr)
    {
        if (curr->data > curr->next->data)
        {
            checking = false;
            break;
        }
        curr = curr->next;
    }

    return checking;
}

void addValue(ListNode *&n, int data)
{
    if (n == nullptr)
    {
        n = new ListNode;
        cout << "n: " << n << endl;
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

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 4);
    addValue(front1, 5);
    addValue(front1, 10);
    addValue(front1, 11);

    printList(front1);

    cout << "Is the linked list sorted?: " << isSorted(front1);

    return 0;
}
