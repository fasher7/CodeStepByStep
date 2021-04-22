#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool isPalindrome(queue<int> &q)
{
    bool check = true;

    queue<int> checker = q;
    queue<int> temp1 = q;
    stack<int> temp2;
    int val;

    while (!temp1.empty())
    {
        val = temp1.front();
        temp2.push(val);
        temp1.pop();
    }

    while (!checker.empty() && !temp2.empty())
    {
        if (checker.front() != temp2.top())
        {
            check = false;
            return check;
        }
        checker.pop();
        temp2.pop();
    }

    return check;
}

int main()
{
    queue<int> q;

    q.push(3);
    q.push(8);
    q.push(17);
    q.push(9);
    q.push(4);
    q.push(17);
    q.push(8);
    q.push(3);

    cout << isPalindrome(q) << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
