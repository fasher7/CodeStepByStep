#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void collapse(stack<int> &s)
{
    int storage = s.size();
    stack<int> temp;
    if (storage % 2 == 0)
    {
        int sum = 0;
        while (!s.empty())
        {
            for (int i = 0; i < 2; i++)
            {
                sum = sum + s.top();
                s.pop();
            }
            temp.push(sum);
            sum = 0;
        }
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }
    else
    {
        int sum = 0;
        int value = s.top();
        temp.push(value);
        s.pop();
        while (!s.empty())
        {
            for (int i = 0; i < 2; i++)
            {
                sum = sum + s.top();
                s.pop();
            }
            temp.push(sum);
            sum = 0;
        }
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }
}

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    collapse(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
