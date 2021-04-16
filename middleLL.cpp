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

int middle(ListNode *&front)
{

    if (front == nullptr)
    {
        throw " ";
    }

    int count = 1;
    ListNode *countcheck = front;
    ListNode *curr = front;

    while (countcheck->next != nullptr)
    {
        ++count;
        countcheck = countcheck->next;
    }
    int middle = (count / 2) + 1;
    count = 0;
    int x = 0;

    while (curr != nullptr)
    {
        ++count;
        if (count == middle)
        {
            x = curr->data;
            return x;
        }
        curr = curr->next;
    }
    return 0;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 11);
    addValue(front1, 88);
    addValue(front1, 35);

    cout << middle(front1);

    return 0;
}
