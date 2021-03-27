void print(int a1[], int x)
{
    for (int k=0; k<x; ++k)
    {
        cout << "element [" << k << "] is " << a1[k] << endl;
    }
    return;
}

/*
f an array named a contains the elements {32, 5, 27, -3, 2598},
then the call of print(a, 5); should produce the following output:

element [0] is 32
element [1] is 5
element [2] is 27
element [3] is -3
element [4] is 2598
*/
