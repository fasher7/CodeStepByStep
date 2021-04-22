#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reorder(queue<int> &q)
{
    stack<int> order;
    queue<int> list1;
    queue<int> list2;
    int val;

    while (!q.empty())
    {
        val = q.front();
        if (val >= 0)
        {
            list1.push(val);
            q.pop();
        }
        else
        {
            list2.push(val);
            q.pop();
        }
    }

    while (!list2.empty())
    {
        val = list2.front();
        order.push(val);
        list2.pop();
    }

    while (!order.empty())
    {
        val = order.top();
        q.push(val);
        order.pop();
    }

    while (!list1.empty())
    {
        val = list1.front();
        q.push(val);
        list1.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(-2);
    q.push(4);
    q.push(5);
    q.push(-7);
    q.push(-9);
    q.push(-12);
    q.push(28);
    q.push(-34);

    reorder(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
