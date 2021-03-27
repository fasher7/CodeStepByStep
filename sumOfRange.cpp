int sumOfRange(int min, int max)
{
    int sum = 0;
    if (min<max)
    {
        for (int i=min; i<=max; ++i)
        {
            sum = sum + i;
        }
    }
    return sum;
}

/*
sumOfRange(3, 7) returns 25
*/
