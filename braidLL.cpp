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

void braid(ListNode *&front)
{
    if (front == nullptr)
    {
        return;
    }

    ListNode *head = nullptr;
    ListNode *go = front;
    ListNode *check = front;
    int count = 0;

    while (check != nullptr)
    {
        count++;
        check = check->next;
    }

    for (int i = 0; i < count; ++i)
    {
        addValue(head, go->data);
        go = go->next;
    }

    ListNode *curr = head;
    ListNode *last = nullptr;
    ListNode *thenext;

    while (curr->next != nullptr)
    {
        thenext = curr->next;
        curr->next = last;
        last = curr;
        curr = thenext;
    }
    thenext = curr->next;
    curr->next = last;
    last = curr;
    curr = thenext;
    head = last;

    ListNode *round1 = front;
    ListNode *round2 = head;
    ListNode *temp1 = nullptr;
    ListNode *temp2 = nullptr;

    while (round2 != nullptr)
    {
        temp1 = round1->next;
        temp2 = round2->next;
        round1->next = round2;
        round2->next = temp1;
        round1 = temp1;
        round2 = temp2;
    }
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 10);
    addValue(front1, 20);
    addValue(front1, 30);
    addValue(front1, 40);

    braid(front1);

    printList(front1);

    return 0;
}
