#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void mirror(queue<string> &q)
{
    queue<string> temp1;
    queue<string> temp2;
    stack<string> temp3;
    string alphabet;
    temp1 = q;

    while (!temp1.empty())
    {
        alphabet = temp1.front();
        temp3.push(alphabet);
        temp1.pop();
    }

    while (!temp3.empty())
    {
        alphabet = temp3.top();
        temp2.push(alphabet);
        temp3.pop();
    }

    while (!temp2.empty())
    {
        alphabet = temp2.front();
        q.push(alphabet);
        temp2.pop();
    }

}


int main()
{
    queue<string> q;

    q.push("a");
    q.push("b");
    q.push("c");

    mirror(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
