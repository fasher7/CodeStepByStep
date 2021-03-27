bool sorted(double list[], int x)
{
    bool z=true;
    double max;
    for (int k=0; k<x; ++k)
    {
        max = list[k];
        cout << "max is: " << max << endl;
        for (int j=k+1; j<x; j++)
        {
            if (max>list[j])
            {
                z = false;
                break;
            }
        }
    }
    return z;
}

/*
Write a function named sorted that accepts an array of doubles and its length as parameters and returns true if the list is in sorted order and false if not.
For example, if an array named list stores {1.5, 4.3, 7.0, 19.5, 25.1, 46.2} respectively, the call of sorted(list, 6) should return true.
*/
