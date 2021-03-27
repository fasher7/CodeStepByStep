void evenSum ()
{
    cout << "how many integers? ";
    int integers;
    cin >> integers;
    int val, val2=0, sum=0;
    for (int i=0; i<integers; ++i)
    {
        cout << "next integer? ";
        cin >> val;
        if (val%2==0)
        {
            sum = sum + val;
        }
        if (val%2==0 && val > val2)
        {
            val2 = val;
        }

    }
    cout << "even sum = " << sum << endl;
    cout << "even max = " << val2;
}

/*
how many integers? 4
next integer? 2
next integer? 9
next integer? 18
next integer? 4
even sum = 24
even max = 18
*/
