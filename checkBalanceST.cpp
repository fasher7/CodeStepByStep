#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int checkBalance(string code)
{
    stack<char> order;
    static int locate1;
    static int locate2;
    int length = code.size();
    for (int x = 0; x < length; ++x)
    {
        if (code[x] == '(')
        {
            order.push('(');
            locate1 = x;
        }
        else if (code[x] == '{')
        {
            order.push('{');
            locate2 = x;
        }
        else if (code[x] == ')')
        {
            if (order.empty())
            {
                return x;
            }
            else if (order.top() == '(')
            {
                order.pop();
            }
            else if (order.top() == '{')
            {
                return x;
            }
        }
        else if (code[x] == '}')
        {
            if (order.empty())
            {
                return x;
            }
            else if (order.top() == '{')
            {
                order.pop();
            }
            else if (order.top() == '(')
            {
                return x;
            }
        }
    }

    if (order.empty())
    {
        return -1;
    }

    else if (order.top() == '(')
    {
        return locate1+1;
    }

    else if (order.top() == '{')
    {
        return locate2+1;
    }

    return 0;
}

int main()
{
    cout << checkBalance("while (true) foo(); }{ ()");

    return 0;
}

//if (a(4) > 9) { foo(a(2)); }
//if (x) {
//for (i=0;i&lt;a(3};i++) { foo{); )
//while (true) foo(); }{ ()
