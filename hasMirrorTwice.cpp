bool hasMirrorTwice (int a1[], int len1, int a2[], int len2)
{
    bool checking = false;
    int counting = 0, secondcount = 0, maincount=0;
    for (int k = len1-1; k >= 0; --k)
    {
        for (int y = 0; y <= len2-1; ++y)
        {
            if (a1[k] == a2[y])
            {
                counting++;
                --k;
                if (counting==len2 || counting == 2*len2)
                {
                    maincount++;
                }
                if (y == len2-1)
                {
                    ++k;
                }

            }
            else if (a1[k] != a2[y])
            {
                counting = 0;
            }
        }
        secondcount = secondcount + counting;
        if (maincount == 2 || secondcount == (2*len2-1))
        {
            checking = true;
            break;
        }
    }
    return checking;
}

/*
int[] a1 = {6, 1, 2, 1, 3, 1, 3, 2, 1, 5};
int[] a2 = {1, 2};
hasMirrorTwice(a1, 10, a2, 2) returns true

int[] a3 = {5, 8, 4, 18, 5, 42, 4, 8, 5, 5};
int[] a4 = {4, 8, 5};
hasMirrorTwice(a3, 10, a4, 3) returns false

int[] a5 = {6, 3, 42, 18, 12, 5, 3, 42, 3, 42};
int[] a6 = {42, 3};
hasMirrorTwice(a5, 10, a6, 2) returns true

int[] a7 = {6, 1, 2, 4, 2, 1, 2, 4, 2, 1, 5};
int[] a8 = {1, 2, 4, 2, 1};
hasMirrorTwice(a7, 11, a8, 5) returns true

int[] a9 = {0, 0};
int[] aa = {0};
hasMirrorTwice(a9, 2, aa, 1) returns true

int[] ab = {8, 9, 2, 1};
int[] ac = {5, 7, 1, 2, 9, 8};
hasMirrorTwice(ab, 4, ac, 6) returns false
*/
