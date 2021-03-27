int numUnique(int a1[], int x)
{
    int counting=0;
    int un = -100;
    for (int k=0; k<x; ++k)
    {
        if (a1[k] != un)
        {
            un = a1[k];
            counting++;
        }
    }
    return counting;
}

/*
int list[] = {5, 7, 7, 7, 8, 22, 22, 23, 31, 35, 35, 40, 40, 40, 41}
then the call of numUnique(list, 15) should return 9
*/
