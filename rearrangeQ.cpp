#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void rearrange(queue<int> &q)
{
    queue<int> temp;
    queue<int> store;
    int val;

    while (!q.empty())
    {
        val = q.front();
        if (val % 2 == 0)
        {
            temp.push(val);
            q.pop();
        }
        else
        {
            store.push(val);
            q.pop();
        }
    }

    while (!temp.empty())
    {
        val = temp.front();
        q.push(val);
        temp.pop();
    }

    while (!store.empty())
    {
        val = store.front();
        q.push(val);
        store.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(3);
    q.push(5);
    q.push(4);
    q.push(17);
    q.push(6);
    q.push(83);
    q.push(1);
    q.push(84);
    q.push(16);
    q.push(37);

    rearrange(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
