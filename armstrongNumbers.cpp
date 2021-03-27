void armstrongNumbers(int n)
{
    if (n<1)
    {
        return;
    }
    int min=pow(10, n-1);
    int max=pow(10, n)-1;
    if (n==1)
    {
        min = 0;
    }
    for (int k=min; k<=max; ++k)
    {
        int sum=0, lastnum=0, checkarm=k;
        while (checkarm>0)
        {
            lastnum = checkarm%10;
            sum = sum + pow(lastnum, n);
            checkarm = checkarm/10;
        }
        if (sum == k)
        {
            cout << k << " ";
        }
    }
}

/*
The call of armstrongNumbers(3); should print the following console output:
153 370 371 407
*/
