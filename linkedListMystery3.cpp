#include <iostream>
using namespace std;

struct ListNode
{
    int data = 0;
    ListNode *next = nullptr;
};

void linkedlistMystery(ListNode *&front)
{
    ListNode *curr = front;
    ListNode *next = curr->next;
    while (next != nullptr)
    {
        if (curr->data % 5 == 0)
        {
            front = front->next;
        }
        else if (curr->data % 2 == 0 && next->data % 2 == 0)
        {
            curr->next = next->next;
        }
        else if (curr->data % 3 == 0)
        {
            next->data++;
            curr->data--;
            curr = next;
        }
        curr = next;
        next = next->next;
    }
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

void printList(ListNode *n)
{
    while (n != nullptr)
    {
        cout << n->data << endl;
        n = n->next;
    }
    cout << endl;
}

int main()
{
    ListNode *front = nullptr;

    addValue(front, 55);
    addValue(front, 10);
    addValue(front, 2);
    addValue(front, 3);
    addValue(front, 4);
    addValue(front, 20);
    addValue(front, 7);
    addValue(front, 6);
    addValue(front, 8);
    addValue(front, 9);
    addValue(front, 12);
    addValue(front, 15);

    printList(front);

    linkedlistMystery(front);

    printList(front);

    return 0;
}
