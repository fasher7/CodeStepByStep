int factorial(int n)
{
    int sum = 1;
    if (n==0)
    {
        sum = 1;
    }
    else
        for (int i=1; i<=n; ++i)
        {
            sum = sum * i;
        }
    return sum;
}

/*
the call of factorial(4) should return 24
*/
