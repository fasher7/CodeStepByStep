bool contains(int a1[], int x, int a2[], int y)
{
    bool con = false;
    int counting = 0;
    for (int z = 0; z < x; ++z)
    {
        for (int k = 0; k < y; ++k)
        {
            if (a1[z]==a2[k])
            {
                counting++;
                z++;
            }
            else if (a1[z]!=a2[k])
            {
                counting = 0;
            }
            if (counting==y)
            {
                con = true;
                break;
            }
        }
    }
    return con;
}

/*
int a1[] = {1, 6, 2, 1, 4, 1, 2, 1, 8};
int a2[] = {1, 2, 1};
Then the call of contains(a1, 9, a2, 3) should return true because a2's sequence of values {1, 2, 1} is contained in a1 starting at index 5
*/
