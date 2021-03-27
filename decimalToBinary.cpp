int decimalToBinary (int inte)
{
    int bin=0, mode=1;
    while(inte>0)
    {
        bin = bin + (inte%2)*mode;
        inte = inte/2;
        mode = mode * 10;
    }
    return bin;
}

/*
decimalToBinary(43) should return 101011
*/
