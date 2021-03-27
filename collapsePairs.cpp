void collapsePairs(int arr[], int x)
{
    if (x%2==0)
    {
        for (int i = 0; i < x; ++i)
        {
            if ((arr[i]+arr[i+1])%2==1)
            {
                arr[i+1] = arr[i] + arr[i+1];
                arr[i] = 0;
            }
            else if ((arr[i]+arr[i+1])%2==0)
            {
                arr[i] = arr[i] + arr[i+1];
                arr[i+1] = 0;
            }
            ++i;        
        }
    }
    else if (x%2==1)
    {
        for (int i = 0; i < x-1; ++i)
        {
            if ((arr[i]+arr[i+1])%2==1)
            {
                arr[i+1] = arr[i] + arr[i+1];
                arr[i] = 0;
            }
            else if ((arr[i]+arr[i+1])%2==0)
            {
                arr[i] = arr[i] + arr[i+1];
                arr[i+1] = 0;
            }
            ++i;        
        }
    }
    for (int a = 0; a < x; ++a)
    {
        cout << arr[a] << " ";
    }
}

/*
before: index  0   1   2   3   4   5   6   7   8   9
        value {7,  2,  8,  9,  4, 22,  7,  1,  9, 10}

               \   /   \   /   \   /   \   /   \   /
                \ /     \ /     \ /     \ /     \ /
                 V       V       V       V       V

after:  index  0   1   2   3   4   5   6   7   8   9
        value {0,  9,  0, 17, 26,  0,  8,  0,  0, 19}
*/
       
