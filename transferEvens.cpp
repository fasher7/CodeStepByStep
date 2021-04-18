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

ListNode *transferEvens(ListNode *&front)
{
    if (front == nullptr)
    {
        return nullptr;
    }

    ListNode *curr = front;
    ListNode *head = front->next;
    ListNode *headcurr = head;
    ListNode *temp1 = nullptr;
    ListNode *temp2 = nullptr;

    while (curr->next != nullptr)
    {
        temp1 = headcurr->next;
        if (temp1 == nullptr)
        {
            curr->next = nullptr;
            break;
        }
        temp2 = headcurr->next->next;
        if (temp2 == nullptr)
        {
            curr->next = headcurr->next;
            headcurr->next = nullptr;
            break;
        }
        curr->next = temp1;
        headcurr->next = temp2;
        curr = curr->next;
        headcurr = headcurr->next;
    }
    
    ListNode *tempp = front;
    front = head;
    head = tempp;
    
    return head;
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 3);
    addValue(front1, 1);
    addValue(front1, 4);
    addValue(front1, 15);
    addValue(front1, 9);
    addValue(front1, 2);
    addValue(front1, 6);
    addValue(front1, 5);
    addValue(front1, 35);
    addValue(front1, 89);
    addValue(front1, 66);

    ListNode *front2 = transferEvens(front1);

    printList(front1);
    printList(front2);

    return 0;
}
