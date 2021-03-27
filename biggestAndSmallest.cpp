#include <iostream>
using namespace std;

int main()
{
    int num,inte,max=0,min=100;
    cout << "Number of numbers? ";
    cin >> num;
    if (num == 1)
    {
        cout << "Number " << 1 << ": ";
        cin >> inte;
        max = inte;
        min = inte;
    }
    else
        for (int i=1; i<=num; ++i)
        {
            cout << "Number " << i << ": ";
            cin >> inte;
            if (inte >= max)
            {
                max = inte;
            }
            if (inte < min)
            {
                min = inte;
            }
        }
    cout << "Biggest = " << max << endl;
    cout << "Smallest = " << min;
}

/*
Number of numbers? 4
Number 1: 5
Number 2: 13
Number 3: -5
Number 4: 2
Biggest = 13
Smallest = -5
*/
