float getPercentEven(int a1[], int x)
{
    float percent=0, counting=0;
    if(x>0)
    {
        for (int a = 0; a < x; ++a)
        {
            if (a1[a]%2==0)
            {
                counting++;
            }
        }
        percent = (counting/x)*100;
    }
    else if (x==0)
    {
        percent = 0;
    }
    return percent;
}

/*
if an array a stores {6, 4, 9, 11, 5}, then the call of getPercentEven(a, 5)
should return 40.0 representing 40% even numbers
*/
