void showTwos(int num)
{
    if (num > 0)
    { 
        cout << num << " = ";
        while (1)
        {
            if (num%2==0)
            {
                cout << "2 * ";
            }    
            else if (num%2==1)
            {
                cout << num;
                break;
            } 
            num = num/2;
            }
    }
    else if (num < 0)
    {
        num = - num;
        cout << -num << " = ";
        while (1)
        {
            if (num%2==0)
            {
                cout << "2 * ";
            }    
            else if (num%2==1)
            {
                cout << -num;
                break;
            } 
            num = num/2;
            }

    }
    return;
}

/*
showTwos(7);
showTwos(18);
showTwos(68);
showTwos(120);

should produce this output:

7 = 7
18 = 2 * 9
68 = 2 * 2 * 17
120 = 2 * 2 * 2 * 15
*/
