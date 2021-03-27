int findRange (int a1[], int x)
{
    int max=0, min=100, range;
    for (int a = 0; a < x; ++a)
    {
        if (a1[a] > max)
        {
            max = a1[a];
        }
        if (a1[a] < min)
        {
            min = a1[a];
        }
    }
    range = (max-min)+1;
    return range;
}

/*
if the largest element is 17 and the smallest is 6, the range is 12
*/
