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

void doubleList(ListNode *&front)
{
    ListNode *curr = front;
    ListNode *temp = new ListNode;
    temp = front;

    if (front == nullptr)
    {
        return;
    }

    int count = 1;

    while (curr->next != nullptr)
    {
        curr = curr->next;
        count++;
    }
    while (count--)
    {
        ListNode *newstuff = new ListNode;
        newstuff->data = temp->data;
        newstuff->next = nullptr;
        curr->next = newstuff;
        curr = curr->next;
        temp = temp->next;
    }
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 35);
    addValue(front1, 28);
    addValue(front1, 7);
    doubleList(front1);
    printList(front1);

    return 0;
}
