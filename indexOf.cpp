int indexOf(int a1[], int x, int t)
{
    int counting = -1;
    if (x>1)
    {
        for (int k = 0; k < x; ++k)
        {
            if (a1[k] == t)
            {
                counting++;
                break;
            }
            counting++;
        }
        if (counting==x-1)
        {
            counting = -1;
        }
    }
    else
        if (a1[0] == t)
        {
            counting = 0;
        }
        else
            counting = -1;
    return counting;
}

/*
int list[] = {42, 7, -9, 14, 8, 39, 42, 8, 19, 0}
Then the call indexOf(list, 10, 8) should return 4
*/
