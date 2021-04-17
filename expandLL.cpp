#include <iostream>
using namespace std;

struct ListNode
{
    int data = 0.0;
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

void expand(ListNode *&front, int k)
{
    if (front == nullptr || k == 1)
    {
        return;
    }

    if (k < 0)
    {
        throw 1000;
    }

    if (k == 0)
    {
        front = nullptr;
        return;
    }

    int newbox = k - 1;
    ListNode *curr = front;

    while (curr != nullptr)
    {
        int x = (curr->data) / k;
        for (int i = 1; i < k; ++i)
        {
            ListNode *make = new ListNode;
            curr->data = x;
            make->next = curr->next;
            curr->next = make;
            make->data = x;
            curr = curr->next;
        }
        curr = curr->next;
    }
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 12);
    addValue(front1, 34);
    addValue(front1, -8);
    addValue(front1, 3);
    addValue(front1, 46);
    expand(front1, 3);
    printList(front1);

    return 0;
}
