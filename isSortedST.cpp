#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool isSorted(stack<int> &s)
{
    stack<int> temp1;
    temp1 = s;
    int size = temp1.size();
    bool check = true;

    if (size == 0 || size == 1)
    {
        return check;
    }

    int val = temp1.top();

    while (!temp1.empty())
    {
        if (val <= temp1.top())
        {
            val = temp1.top();
            temp1.pop();
        }
        else
        {
            check = false;
            return check;
        }
    }
    return check;
}

int main()
{
    stack<int> s;

    s.push(18);
    s.push(12);
    s.push(15);
    s.push(6);
    s.push(1);

    cout << isSorted(s) << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
