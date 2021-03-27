int findMedian (int a1[], int x)
{
    int med, medium;
    for (int a = 0; a < x; ++a)
    {
        for (int b = a+1; b < x; ++b)
        {
            if (a1[a] > a1[b])
            {
                int temp = a1[a];
                a1[a] = a1[b];
                a1[b] = temp;
            }
        }
    }
    med = (x/2);
    medium = a1[med];
    return medium;
}

/*
the median of {5, 2, 4, 17, 55, 4, 3, 26, 18, 2, 17} is 5
the median of {42, 37, 1, 97, 1, 2, 7, 42, 3, 25, 89, 15, 10, 29, 27} is 25
*/
