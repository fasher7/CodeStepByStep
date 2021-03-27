int factorCount (int inte)
{
    int totalcount = 0;
    for (int i = 1; i <= inte; ++i)
    {
        if (inte%i==0)
        {
            totalcount++;
        }
    }
    return totalcount;
}

/*
The eight factors of 24 are 1, 2, 3, 4, 6, 8, 12, and 24, so the call of factorCount(24) should return 8
*/
