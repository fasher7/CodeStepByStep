int factorial(int inte)
{
    if (inte==0)
    {
        return 1;
    }
    return inte * factorial (inte-1);
}

/*
factorial(4) should return 24
*/
