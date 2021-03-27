int evenDigits(int n)
{
    if (n==0) 
    {
        return 0;
    }
    if ((n%10)%2==0)
    {
        return (n%10) + evenDigits(n/10)*10;
    }
    return evenDigits(n/10);
}

/*
evenDigits(8342116) should return 8426
*/
