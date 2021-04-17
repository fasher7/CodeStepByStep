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

void chopBothSides(ListNode *&front, int k)
{
    if (front == nullptr || k <= 0)
    {
        return;
    }

    ListNode *countcheck = front;
    ListNode *curr1 = front;
    int count = 0;

    while (countcheck != nullptr)
    {
        count++;
        countcheck = countcheck->next;
    }

    if (2 * k > count)
    {
        throw 1000;
    }

    if (2 * k == count)
    {
        delete front->next;
        front = nullptr;
        return;
    }

    for (int i = 0; i < k; ++i)
    {
        curr1 = front;
        front = front->next;
    }
    curr1->next = nullptr;
    delete curr1;

    ListNode *curr2 = front;
    for (int i = 1; i < count - (2 * k); ++i)
    {
        curr2 = curr2->next;
    }
    ListNode *other;
    other = curr2->next;
    curr2->next = nullptr;
    delete other;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 10);
    addValue(front1, 20);
    addValue(front1, 30);
    addValue(front1, 40);
    addValue(front1, 50);
    addValue(front1, 60);
    addValue(front1, 70);
    addValue(front1, 80);
    addValue(front1, 90);
    addValue(front1, 100);
    addValue(front1, 110);
    chopBothSides(front1, 3);
    printList(front1);

    return 0;
}
