#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void switchPairs(stack<int> &s)
{
    int check = s.size();

    if (check == 0 || check == 1)
    {
        return;
    }

    stack<int> temp1;
    stack<int> storing;
    queue<int> temp2;
    queue<int> store;
    int val;
    if (check % 2 == 0)
    {
        while (!s.empty())
        {
            val = s.top();
            temp2.push(val);
            s.pop();
        }
        while (!temp2.empty())
        {
            for (int i = 0; i < 2; ++i)
            {
                val = temp2.front();
                storing.push(val);
                temp2.pop();
            }
            for (int j = 0; j < 2; ++j)
            {
                val = storing.top();
                temp1.push(val);
                storing.pop();
            }
        }
        while (!temp1.empty())
        {
            val = temp1.top();
            s.push(val);
            temp1.pop();
        }
    }
    else
    {
        int special = s.top();
        s.pop();
        while (!s.empty())
        {
            val = s.top();
            temp2.push(val);
            s.pop();
        }
        while (!temp2.empty())
        {
            for (int i = 0; i < 2; ++i)
            {
                val = temp2.front();
                storing.push(val);
                temp2.pop();
            }
            for (int j = 0; j < 2; ++j)
            {
                val = storing.top();
                temp1.push(val);
                storing.pop();
            }
        }
        while (!temp1.empty())
        {
            val = temp1.top();
            s.push(val);
            temp1.pop();
        }
        s.push(special);
    }
}

int main()
{
    stack<int> s;

    s.push(3);
    s.push(8);
    s.push(17);
    s.push(9);
    s.push(99);
    s.push(9);
    s.push(17);
    s.push(8);
    s.push(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(14);
    s.push(42);

    switchPairs(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
