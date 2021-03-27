void switchPairs(string a[], int x)
{
    if (x%2==1)
    {
        for (int k=0; k<x-1; ++k)
        {
            string temp = a[k];
            a[k] = a[k+1];
            a[k+1] = temp;
            k=k+1;
        }
    }
    else
        for (int k=0; k<x-1; ++k)
        {
            string temp = a[k];
            a[k] = a[k+1];
            a[k+1] = temp;
            k=k+1;
        }
    return;
}

/*
string a[] = {"a", "bb", "c", "ddd", "ee", "f", "g"};
switchPairs(a, 7);
Your function should switch the first pair ("a", "bb"), the second pair ("c", "ddd") and the third pair ("ee", "f"), to yield this array:

{"bb", "a", "ddd", "c", "ee", "f", "g"}
*/
