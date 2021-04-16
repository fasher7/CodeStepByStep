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

void reverse(ListNode *&front)
{
    if (front == nullptr)
    {
        return;
    }

    ListNode *curr = front;
    ListNode *last = nullptr;
    ListNode *thenext;

    while (curr -> next != nullptr)
    {
        thenext = curr -> next;
        curr -> next = last;
        last = curr;
        curr = thenext;
    }
    thenext = curr -> next;
    curr -> next = last;
    last = curr;
    curr = thenext;
    front = last;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 8);
    addValue(front1, 19);
    addValue(front1, 4);
    addValue(front1, 17);
    reverse(front1);
    printList(front1);

    return 0;
}
