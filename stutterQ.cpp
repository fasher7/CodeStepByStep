#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void stutter(queue<int> &q)
{
    queue<int> temp;
    int value;

    while (!q.empty())
    {
        value = q.front();
        temp.push(value);
        temp.push(value);
        q.pop();
    }
    q = temp;
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    stutter(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
