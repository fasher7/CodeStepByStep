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

void switchPairsOfPairs(ListNode *&front)
{

    if (front == nullptr || front->next == nullptr)
    {
        return;
    }

    ListNode *curr = front;
    ListNode *temp = front;
    ListNode *prev = nullptr;
    ListNode *pair1 = front;
    ListNode *pair2 = front->next->next;

    if (pair2 == nullptr || pair2->next == nullptr)
    {
        return;
    }

    int count = 1;

    while (curr != nullptr)
    {
        if (count > 0)
        {
            temp->next->next = pair2->next->next;
            front = pair2;
            front->next->next = temp;
            if (temp->next->next == nullptr)
            {
                break;
            }
            else if (curr->next->next != nullptr)
            {
                pair1 = curr->next->next;
                if (pair1->next == nullptr || pair1->next->next == nullptr)
                {
                    break;
                }
                else if (pair1->next != nullptr && pair1->next->next != nullptr)
                {
                    pair2 = pair1->next->next;
                }
            }
            prev = curr->next;
            curr = pair1;
        }
        count = 0;
        if (pair2->next != nullptr)
        {
            prev->next = pair2;
            temp = pair2->next->next;
            pair2->next->next = pair1;
            pair1->next->next = temp;
            curr = pair1->next->next;
            if (curr == nullptr)
            {
                break;
            }
            prev = pair1->next;
            pair1 = curr;
            if (pair1->next != nullptr || pair1->next->next != nullptr)
            {
                pair2 = pair1->next->next;
            }
        }
        curr = curr->next;
    }
}

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 2);
    addValue(front1, 3);
    addValue(front1, 4);
    addValue(front1, 5);
    addValue(front1, 6);
    addValue(front1, 7);
    addValue(front1, 8);

    switchPairsOfPairs(front1);

    printList(front1);

    return 0;
}
