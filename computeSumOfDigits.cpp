#include <iostream>
using namespace std;

int main()
{
    int val, sum=0;
    cout <<"Type an integer: ";
    cin >> val;
    while (val > 0)
    {
        int x = val % 10;
        sum = sum + x;
        val = val / 10;
    }
    cout << "Digit sum is " << sum;
}

/*
Type an integer: 827104
Digit sum is 22
*/
