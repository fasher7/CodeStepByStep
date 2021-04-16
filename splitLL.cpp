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

void split(ListNode *&front)
{
    if (front == nullptr)
    {
        return;
    }

    ListNode *curr = front;
    ListNode *temp;
    ListNode *head1 = nullptr;
    ListNode *head2 = nullptr;

    while (curr->next != nullptr)
    {
        if (curr->next->data < 0)
        {
            head2 = curr -> next;
            head1 = curr->next->next;
            head2->next = front;
            curr->next = head1;
            front = head2;
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 8);
    addValue(front1, 7);
    addValue(front1, -4);
    addValue(front1, 19);
    addValue(front1, 0);
    addValue(front1, 43);
    addValue(front1, -8);
    addValue(front1, -7);
    addValue(front1, 2);
    split(front1);
    printList(front1);

    return 0;
}
