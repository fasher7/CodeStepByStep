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

int countDuplicates(ListNode *front)
{
    ListNode *curr = front;
    int count = 0;

    if (front == nullptr)
    {
        return 0;
    }
    
    while (curr->next != nullptr)
    {
        if (curr->data == curr->next->data)
        {
            count = count + 1;
        }
        curr = curr->next;
    }

    return count;
}

void addValue(ListNode *&n, int data)
{
    if (n == nullptr)
    {
        n = new ListNode;
        cout << "n: " << n << endl;
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

int main()
{
    ListNode *front1 = nullptr;

    addValue(front1, 1);
    addValue(front1, 1);
    addValue(front1, 1);
    addValue(front1, 3);
    addValue(front1, 3);
    addValue(front1, 6);
    addValue(front1, 9);
    addValue(front1, 15);
    addValue(front1, 15);
    addValue(front1, 23);
    addValue(front1, 23);
    addValue(front1, 23);
    addValue(front1, 40);
    addValue(front1, 40);

    printList(front1);

    cout << "How many duplicates? " << countDuplicates(front1);

    return 0;
}
