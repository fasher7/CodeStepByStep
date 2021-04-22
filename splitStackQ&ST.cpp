#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void splitStack(stack<int> &s)
{
    stack<int> order1;
    stack<int> order2;
    queue<int> list;

    int val;

    while (!s.empty())
    {
        val = s.top();
        if (val >= 0)
        {
            order1.push(val);
            s.pop();
        }
        else
        {
            list.push(val);
            s.pop();
        }
    }

    while (!order1.empty())
    {
        val = order1.top();
        order2.push(val);
        order1.pop();
    }

    while (!list.empty())
    {
        val = list.front();
        s.push(val);
        list.pop();
    }

    while (!order2.empty())
    {
        val = order2.top();
        s.push(val);
        order2.pop();
    }
}

int main()
{
    stack<int> s;

    s.push(4);
    s.push(0);
    s.push(-1);
    s.push(5);
    s.push(-6);
    s.push(-3);
    s.push(2);
    s.push(7);

    splitStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
