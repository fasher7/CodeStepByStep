int binaryToDecimal (int number)
{
    int deci = 0, power=0;
    while (number > 0)
    {
        if (number%10 == 1)
        {
            if (power == 0)
            {
                deci = deci + 1;
            }
            else if (power > 0)
            {
                int x = 1;
                for (int i = 0; i < power; ++i)
                {
                    x = x*2;
                }
                deci = deci + x;
            }
        }
        power++;
        number = number/10;
    }
    return deci;
}

/*
binaryToDecimal(101011) should return 43
*/
