int daysInMonth (int month)
{
    int x;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
    {
        x = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        x = 30;
    }
    else if ( month == 2)
    {
        x = 28;
    }
    return x;
}

/*
Month	1 Jan	2 Feb	3 Mar	4 Apr	5 May	6 Jun	7 Jul	8 Aug	9 Sep	10 Oct	11 Nov	12 Dec
Days	31	  28	  31	  30	  31	  30	  31	  31	  30	  31	    30	    31
*/
