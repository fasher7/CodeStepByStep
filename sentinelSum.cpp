#include <iostream>
using namespace std;

int main()
{
    int sum=0, number;
    for (;;)
    {
        cout << "Type a number: ";
        cin >> number;
        if (number == -1)
        {
            break;
        }
        sum = sum + number;
    }
    cout << "Sum is " << sum;
}

/*
Type a number: 10
Type a number: 20
Type a number: 30
Type a number: -1
Sum is 60
*/
