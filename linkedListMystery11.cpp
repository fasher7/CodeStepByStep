#include <iostream>
using namespace std;

struct ListNode
{
    int data = 0;
    ListNode *next = nullptr;
};

void linkedlistMystery(ListNode *&front, ListNode *&front2)
{
    ListNode *curr1 = front;
    while (front2 != nullptr)
    {
        if (curr1->next == nullptr)
        {
            curr1->next = front2;
            front2 = nullptr;
        }
        else if (front2->data < curr1->next->data)
        {
            ListNode *temp2 = front2;
            front2 = front2->next;
            temp2->next = curr1->next;
            curr1->next = temp2;
        }
        else
        {
            curr1 = curr1->next;
        }
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
    addValue(front, 2);
    addValue(front, 7);
    addValue(front, 5);
    addValue(front, 33);
    printList(front);

    ListNode *front2 = nullptr;
    addValue(front2, 1);
    addValue(front2, 10);
    addValue(front2, 9);
    addValue(front2, 8);
    addValue(front2, 66);
    addValue(front2, 55);
    printList(front2);

    linkedlistMystery(front, front2);
    printList(front);
    printList(front2);

    return 0;
}
