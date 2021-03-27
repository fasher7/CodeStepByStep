int sqrt(int N)
{
    for (int x=0; x<=N; ++x)
    {
        if (x*x==N)
        {
            return x;
        }
        else if (x*x>N)
        {
            return x-1;
        }
    }
    return 0;
}

/*
the square root of 7 is approximately 2.65, but your function should return 2
*/
