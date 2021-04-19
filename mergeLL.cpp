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
        n = new ListNode{data};
    }
    else
    {
        ListNode *current = n;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        ListNode *p = new ListNode{data};
        current->next = p;
    }
}

ListNode *merge(ListNode *front1, ListNode *front2)
{
    if (front1 == nullptr)
    {
        return front2;
    }

    if (front2 == nullptr)
    {
        return front1;
    }

    ListNode *head1 = front1;
    ListNode *head2 = front2;
    ListNode *temp1 = nullptr;
    ListNode *temp2 = nullptr;

    if (head1->data < head2->data)
    {
        temp1 = head1;
        temp2 = head1->next;
        temp1->next = merge(temp2, head2);
    }
    else if (head1->data >= head2->data)
    {
        temp1 = head2;
        temp2 = head2->next;
        temp1->next = merge(head1, temp2);
    }

    return temp1;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 4);
    addValue(front1, 5);
    addValue(front1, 10);
    addValue(front1, 11);

    ListNode *front2 = nullptr;
    addValue(front1, 2);
    addValue(front1, 4);
    addValue(front1, 6);
    addValue(front1, 7);
    addValue(front1, 8);

    merge(front1, front2);

    printList(front1);

    return 0;
}
