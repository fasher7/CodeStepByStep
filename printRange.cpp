void printRange (int x, int y)
{
    static int z = x;
    if (x-y==0)
    {
        cout << x;
    }
    else if ((z+y)%2==0)
    {
        if(x > y)
        {
            throw x;
        }
        else if(x <= (z+y)/2)
        {
            if (x == (z+y)/2)
            {
                cout << x << " < ";
                printRange(x+1, y);
            }
            else
            {
                cout << x << " > ";
                printRange(x+1, y);
            }
        }
        else if(x > (z+y)/2)
        {
            cout << x << " < ";
            printRange(x+1, y);
        }
    }
    else if ((z+y)%2==1)
    {
        if (y-z==1)
        {
            cout << x << " -- " << y;
        }
        else
        {
            if(x > y)
            {
                throw x;
            }
            else if(x <= (z+y)/2)
            {
                if (x == (z+y)/2)
                {
                    cout << x << " -- " << x+1 << " < ";
                    printRange(x+2, y);
                }
                else
                {
                    cout << x << " > ";
                    printRange(x+1, y);
                }
            }
            else if(x > (z+y)/2)
            {
                cout << x << " < ";
                printRange(x+1, y);
            }        
        }
    }
}

/*
Call	                Output
printRange(1, 9);	    1 > 2 > 3 > 4 > 5 < 6 < 7 < 8 < 9
printRange(1, 10);	  1 > 2 > 3 > 4 > 5 -- 6 < 7 < 8 < 9 < 10
printRange(23, 29);	  23 > 24 > 25 > 26 < 27 < 28 < 29
printRange(13, 14);	  13 -- 14
printRange(-8, -8);	  -8
*/
