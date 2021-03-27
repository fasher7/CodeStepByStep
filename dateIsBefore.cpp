bool dateIsBefore (int month1, int date1, int month2, int date2)
{
    bool det = false;
    if (month1 < month2)
    {
        det = true;
    }
    else if (month1 == month2 && date1 < date2)
    {
        det = true;
    }
    return det;
}

/*
Call	                     Return	 Explanation
dateIsBefore(6, 3, 9, 20)	 true	 June 3 comes before Sep 20
dateIsBefore(10, 1, 2, 25)   false	 Oct 1 does not come before Feb 25
dateIsBefore(8, 15, 8, 15)   false	 Aug 15 does not come before Aug 15
dateIsBefore(8, 15, 8, 16)   true	 Aug 15 comes before Aug 16
*/
