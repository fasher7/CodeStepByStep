int secondIndexOf(int a1[], int x, int t)
{
    int counting = -1;
    int occ=0;
    if (x>1)
    {
        for (int k = 0; k < x; ++k)
        {
            if (a1[k] == t)
            {
                occ++;
                if(occ==2)
                {
                    counting++;
                    break;
                }
            }
            counting++;
            if (counting==x-1)
            {
                counting = -1;
            }
        }
    }
    else
        counting = -1;
    return counting;
}

/*
Then the call secondIndexOf(list, 11, 42) should return 6
*/
