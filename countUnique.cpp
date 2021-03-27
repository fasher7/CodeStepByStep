int countUnique (int a1[], int x)
{
    int counting = 0;
    for (int a = 0; a < x; ++a)
    {
        counting++;
        for (int b = 0; b < a; ++b)
        {
            if (a1[a] == a1[b])
            {
                counting--;
                break;
            }
        }
    }
    return counting;
}

/*
if an array named numbers stores {7, 7, 2, 2, 1, 2, 2, 7}, 
the call of countUnique(numbers, 8) should return 3 because there are 3 unique values: 7, 2, and 1
*/
