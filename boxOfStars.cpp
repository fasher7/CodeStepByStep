void boxOfStars (int col, int ro)
{
    for (int i=1; i<=ro; ++i)
    {
        for (int j=1; j<=col; ++j)
        {
            if (i==1 || i==ro)
            {
                cout << "*";
            }
            else if (i>1 && i<ro)
            {
                if (j==1)
                {
                    cout << "*";
                }
                else if (j>1 && j<col)
                {
                    cout << " ";
                }
                else if (j==col)
                    cout << "*";
            }
        }
    cout << endl;
    }
    return;
}
    
/*

********
*      *
*      *
*      *
********

*/
