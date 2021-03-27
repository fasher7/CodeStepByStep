int maxValue(int a1[], int x)
{
    int max=-100;
    for (int k=0; k<x; ++k)
    {
        if (a1[k] > max)
        {
            max = a1[k];
        }
    }
    return max;
}

/*
array named a passed stores {17, 7, -1, 26, 3, 9}, the call of maxValue(a, 6) should return 26
*/
