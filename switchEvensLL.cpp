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

void switchEvens(ListNode *&front1, ListNode *&front2)
{
    if (front1 == nullptr || front2 == nullptr)
    {
        return;
    }

    ListNode *ccheck1 = front1;
    ListNode *ccheck2 = front2;
    ListNode *curr1 = front1;
    ListNode *curr2 = front2;
    int count1 = 0;
    int count2 = 0;
    int maincount;

    while (ccheck1 != nullptr)
    {
        count1++;
        ccheck1 = ccheck1->next;
    }

    while (ccheck2 != nullptr)
    {
        count2++;
        ccheck2 = ccheck2->next;
    }

    if (count1 > count2)
    {
        maincount = count2;
    }
    else
    {
        maincount = count1;
    }

    ListNode *prev1 = front1;
    ListNode *prev2 = front2;
    ListNode *thenext1 = nullptr;
    ListNode *thenext2 = nullptr;

    for (int i = 0; i < maincount; ++i)
    {
        if ((curr1->data) % 2 == 0 && (curr2->data) % 2 == 0)
        {
            int datax = curr1 -> data;
            curr1 -> data = curr2 -> data;
            curr2 -> data = datax;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
}

int main()
{
    ListNode *front1 = nullptr;
    addValue(front1, 2);
    addValue(front1, 4);
    addValue(front1, 3);
    addValue(front1, 7);
    addValue(front1, 8);
    addValue(front1, 4);
    addValue(front1, 6);
    addValue(front1, 12);
    addValue(front1, 22);
    addValue(front1, 10);

    ListNode *front2 = nullptr;
    addValue(front2, 66);
    addValue(front2, 55);
    addValue(front2, 16);
    addValue(front2, 43);
    addValue(front2, 22);
    addValue(front2, 90);
    addValue(front2, 39);
    addValue(front2, 44);

    switchEvens(front1, front2);

    printList(front1);
    printList(front2);

    return 0;
}
