int countDuplicates (int a1[], int x)
{
    int counting = 0;
    for (int a = 0; a < x; ++a)
    {
        for (int b = 0; b < a; ++b)
        {
            if (a1[a] == a1[b])
            {
                counting++;
                break;
            }
        }
    }
    return counting;
}

/*
if an array named a contains {1, 4, 2, 4, 7, 1, 1, 9, 2, 3, 4, 1}, then the call of countDuplicates(a, 12) 
should return 6 because there are three duplicates of the value 1, one duplicate of the value 2, and two duplicates of the value 4
*/
