int digitCount (int number)
{
    int counting=0;
    if (number>0)
    { 
        while (number>0)
        {
            number = number / 10;
            ++counting;
        }
    }
    else 
        while (number<0)
        {
            number = number / 10;
            ++counting;
        }
    return counting;
}

/*
digitCount(38015) returns 5
digitCount(-72) returns 2
*/
