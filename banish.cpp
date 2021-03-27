void banish(int a1[], int x, int a2[], int y)
{
    for (int a = 0; a < x; ++a)
    {
        for (int b = 0; b < y; ++b)
        {
            if (a1[a] == a2[b])
            {
				for (int d=a; d<x; ++d)
				{
					a1[d] = a1[d+1];
				}
				a1[x-1]=0;
				a=-1;
            } 
        }
    }
    for (int i = 0; i < x; ++i)
    {
        cout << a1[i] << " ";
    }
    return;
}

/*
int a1[] = {42, 3, 9, 42, 42, 0, 42, 9, 42, 42, 17, 8, 2222, 4, 9, 0, 1}
int a2[] = {42, 2222, 9}

banish(a1, 17, a2, 3)

a1 should become:
{3, 0, 17, 8, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
*/
        
