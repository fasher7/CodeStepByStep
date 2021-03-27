void numberSquare (int min, int max)
{
    int diff = max - min;
    diff = diff + 1;
    int arrnum[diff];
    int j = min;
    for (int i=0; i<diff; ++i)
    {
        arrnum[i]=j;
        ++j;
    }
    for (int i=0; i<diff; ++i)
    {
        for (int x=min; x<=max; ++x)
        {
            if (i==0)
            {
            cout << x;
            }
            else if (i>0)
            {
                if (x<=max)
                {
                    int y = x + i;
                    if (y > max)
                    {
                        cout << y - diff;
                    }
                    else if (y <= max)
                    {
                        cout << y;
                    }
                }

            }
        }
        cout << endl;
    }
}

/*
12345
23451
34512
45123
51234
*/
