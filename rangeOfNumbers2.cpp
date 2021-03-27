#include <iostream>
using namespace std;

int main()
{
    int integer1, integer2;
    cout << "Start? ";
    cin >> integer1;
    cout << "End? ";
    cin >> integer2;
    if (integer1 < integer2)
    {
        int diff = integer2 - integer1;
        diff = diff + 1;
        int arrnum[diff];
        int j = integer1;
        for (int i=1; i<=diff; ++i)
        {
            arrnum[i]=j;
            ++j;
        }
        for (int i=1; i<=diff; ++i)
        {
            if (i < diff)
            {
                cout << arrnum[i] << ", ";
            }
            else
                cout << arrnum[i];
        }
    }
    else if (integer1 > integer2)
    {
        int diff = integer1 - integer2;
        diff = diff + 1;
        int arrnum[diff];
        int j = integer1;
        for (int i=1; i<=diff; ++i)
        {
            arrnum[i]=j;
            --j;
        }
        for (int i=1; i<=diff; ++i)
        {
            if (i < diff)
            {
                cout << arrnum[i] << ", ";
            }
            else
                cout << arrnum[i];
        }
    }
    else
        cout << integer1;
}

/*
Start? 2
End? 8
2, 3, 4, 5, 6, 7, 8

Start? 18
End? 11
18, 17, 16, 15, 14, 13, 12, 11 

Start? 42
End? 42
42
*/
