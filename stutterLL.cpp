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

void stutter(ListNode *&front)
{
    ListNode *curr = front;

    if (front == nullptr)
    {
        return;
    }

    int newInt = curr->data;

    while (curr->next != nullptr)
    {
        ListNode *temp = new ListNode;
        temp->data = newInt;
        temp->next = curr->next;
        curr->next = temp;
        curr = curr -> next -> next;
        newInt = curr -> data;
        
    }
    ListNode *temp = new ListNode;
    temp->data = newInt;
    temp->next = curr->next;
    curr->next = temp;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 8);
    addValue(front1, 19);
    addValue(front1, 4);
    addValue(front1, 17);
    stutter(front1);
    printList(front1);

    return 0;
}
