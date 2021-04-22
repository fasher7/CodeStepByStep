#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void shift(stack<int> &s, int n)
{
    int check = s.size();

    if (n <= 0 || n > check)
    {
        return;
    }

    stack<int> temp1;
    queue<int> temp2;
    int x = check - n;
    int val;

    while (!s.empty())
    {
        val = s.top();
        temp2.push(val);
        s.pop();
    }

    for (int i = 0; i < x; ++i)
    {
        val = temp2.front();
        temp1.push(val);
        temp2.pop();
    }

    while (!temp1.empty())
    {
        val = temp1.top();
        s.push(val);
        temp1.pop();
    }

    while (!temp2.empty())
    {
        val = temp2.front();
        s.push(val);
        temp2.pop();
    }
}

int main()
{
    stack<int> s;

    s.push(7);
    s.push(23);
    s.push(-7);
    s.push(0);
    s.push(22);
    s.push(-8);
    s.push(4);
    s.push(5);

    shift(s, 3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
