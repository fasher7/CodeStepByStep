#include <iostream>
using namespace std;

struct ListNode
{
    double data = 0.0;
    double threshold = 0.0;
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

void addValue(ListNode *&n, double data)
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

void removeAllThreshold(ListNode *&front, double value, double threshold)
{
    if (front == nullptr)
    {
        return;
    }

    ListNode *curr = front;
    ListNode *head = nullptr;
    double range1 = value - threshold;
    double range2 = value + threshold;

    while (curr->next != nullptr)
    {
        if (curr->data <= range2 && curr->data >= range1)
        {
            front = front->next;
        }
        if (curr->next->data <= range2 && curr->next->data >= range1)
        {
            head = curr->next->next;
            curr->next = head;
        }
        else
        {
            curr = curr->next;
        }
    }
    if (curr->data <= range2 && curr->data >= range1)
    {
        front = nullptr;
    }
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 3.0);
    addValue(front1, 9.0);
    addValue(front1, 4.2);
    addValue(front1, 2.1);
    addValue(front1, 3.3);
    addValue(front1, 2.3);
    addValue(front1, 3.4);
    addValue(front1, 4.0);
    addValue(front1, 2.9);
    addValue(front1, 2.7);
    addValue(front1, 3.1);
    addValue(front1, 18.2);
    removeAllThreshold(front1, 3, 0.3);
    printList(front1);

    return 0;
}
