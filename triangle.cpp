void triangle(int tri)
{
    for (int i=1; i<=tri; ++i)
    {
        for (int j=1; j<=tri-i; ++j)
        {
            cout << " ";
        }
        for (int k=1; k<=i; ++k)
        {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

/*
    *
   **
  ***
 ****
*****
*/
