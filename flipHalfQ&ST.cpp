#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void flipHalf(queue<int> &q)
{
    int sizee = q.size();
    queue<int> temp;
    queue<int> store;
    queue<int> again;
    stack<int> storing;
    temp = q;
    int val;
    int counting = -1;

    if (sizee % 2 == 0)
    {
        while (!temp.empty())
        {
            counting++;
            temp.pop();
        }

        while (counting != -1)
        {
            if (counting % 2 == 0)
            {
                val = q.front();
                storing.push(val);
                q.pop();
                --counting;
            }
            else
            {
                val = q.front();
                store.push(val);
                q.pop();
                --counting;
            }
        }

        while (!storing.empty())
        {
            val = storing.top();
            again.push(val);
            storing.pop();
        }

        while (!store.empty() && !again.empty())
        {
            val = store.front();
            q.push(val);
            val = again.front();
            q.push(val);
            store.pop();
            again.pop();
        }
    }
    else
    {
        while (!temp.empty())
        {
            counting++;
            temp.pop();
        }

        while (counting != 0)
        {
            if (counting % 2 == 1)
            {
                val = q.front();
                storing.push(val);
                q.pop();
                --counting;
            }
            else
            {
                val = q.front();
                store.push(val);
                q.pop();
                --counting;
            }
        }

        while (!storing.empty())
        {
            val = storing.top();
            again.push(val);
            storing.pop();
        }

        while (!store.empty() && !again.empty())
        {
            val = store.front();
            q.push(val);
            val = again.front();
            q.push(val);
            store.pop();
            again.pop();
        }

        while (!q.empty())
        {
            val = q.front();
            store.push(val);
            q.pop();
            break;
        }

        while (!store.empty())
        {
            val = store.front();
            q.push(val);
            store.pop();
        }
    }
}

int main()
{
    queue<int> q;

    q.push(99);
    q.push(22);
    q.push(0);
    q.push(44);
    q.push(88);
    q.push(66);
    q.push(77);

    flipHalf(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
