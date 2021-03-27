int largestDigit(int integer)
{
    int largest;
    if (integer > 0)
    {
        if (integer==0) 
        {
            return 0;
        }
        if (integer%10 > largestDigit(integer/10))
        {
            largest = integer%10;
        }
        else
            return largestDigit(integer/10);
    }
    else if (integer < 0)
    {
        integer = - integer;
        largest = largestDigit(integer);
        
    }
    else
    {
        return 0;
    }
    return largest;
}

/*
Call	                  Returns
largestDigit(14263203)	6
largestDigit(845)	      8
largestDigit(52649)	    9
largestDigit(3)       	3
largestDigit(0)	        0
largestDigit(-573026)	  7
largestDigit(-2)	      2
*/
