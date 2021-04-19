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

void adddata(ListNode *&n, int data)
{
    if (n == nullptr)
    {
        n = new ListNode;
        n->data = data;
    }
    else
    {
        ListNode *curr = n;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        ListNode *p = new ListNode;
        p->data = data;
        curr->next = p;
    }
}

void combineDuplicates(ListNode *&front)
{
    if (front == nullptr)
    {
        return;
    }

    ListNode *check = front;
    ListNode *curr = front;
    ListNode *prev = front;
    ListNode *temp1 = nullptr;
    int count = 0;

    while (check->next != nullptr)
    {
        if (check->data == check->next->data)
        {
            count++;
        }
        else
            break;
        check = check->next;
    }

    int add;
    int sum = 0;

    while (curr != nullptr)
    {
        if (count > 0)
        {
            add = curr->data;
            sum = sum + add;
            for (int i = 0; i < count; ++i)
            {
                sum = sum + add;
                curr->next->data = sum;
                curr = curr->next;
                front = front->next;
            }
            count = 0;
            sum = 0;
        }
        if (front->next != nullptr)
        {
            if (front->data == front->next->data)
            {
                curr = curr->next;
            }
        }
        prev = curr;
        temp1 = curr->next;
        int x = prev->data;
        while (temp1 != nullptr)
        {
            if (temp1->data == x)
            {
                prev->data = prev->data + temp1->data;
                ListNode *head2 = prev;
                ListNode *prev2 = prev;
                while (head2->data != x)
                {
                    prev2 = head2;
                    head2 = head2->next;
                }
                if (head2->next == nullptr)
                {
                    prev2->next = nullptr;
                }
                else
                {
                    prev2->next = head2->next;
                }
            }
            else
            {
                break;
            }
            temp1 = temp1->next;
        }
        curr = curr->next;
    }
}

int main()
{
    ListNode *front1 = nullptr;
    adddata(front1, 3);
    adddata(front1, 3);
    adddata(front1, 2);
    adddata(front1, 4);
    adddata(front1, 4);
    adddata(front1, 4);
    adddata(front1, -1);
    adddata(front1, -1);
    adddata(front1, 4);
    adddata(front1, 12);
    adddata(front1, 12);
    adddata(front1, 12);
    adddata(front1, 12);
    adddata(front1, 48);
    adddata(front1, -5);
    adddata(front1, -5);

    combineDuplicates(front1);

    printList(front1);

    return 0;
}
