void rangeOfNumbers(int inti1, int inti2)
{
    if (inti1 < inti2)
    {
        int diff = inti2 - inti1;
        diff = diff + 1;
        int arrnum[diff];
        int j = inti1;
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
    else if (inti1 > inti2)
    {
        int diff = inti1 - inti2;
        diff = diff + 1;
        int arrnum[diff];
        int j = inti1;
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
        cout << inti1;
    return;
}

/*
rangeOfNumbers(2, 8)  ;	2, 3, 4, 5, 6, 7, 8
rangeOfNumbers(18, 11);	18, 17, 16, 15, 14, 13, 12, 11
rangeOfNumbers(42, 42);	42
*/
