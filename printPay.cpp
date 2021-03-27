void printPay (double salary, double hours)
{
    cout << "Hours worked: " << hours << endl;
    double sum = 0, bonus;
    bonus = hours - 8;
    if (bonus > 0)
    {
        sum = sum + (8*salary) + (1.5*salary*bonus);
    }
    else
        sum = sum + (salary*hours);
    cout << fixed << setprecision(2) << "Pay earned: $" << sum;
    return; 
}

/*
Every hour over 8 is paid at 1.5x the normal salary.
For example, the call of printPay(10.00, 11); should print the following output:

Hours worked: 11
Pay earned: $125.00
*/
