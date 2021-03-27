float computeAverage (int a[], int x)
{
    float sum = 0;
    for (int j=0; j<x; ++j)
    {
        sum = sum + a[j];
    }
    sum = sum/x;
    return sum;
}

/*
if an array named a contains {1, -2, 4, -4, 9, -6, 16, -8, 25, -10}, then the call of computeAverage(a, 10) should return 2.5
*/
