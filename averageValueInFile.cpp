double averageValueInFile(string values)
{
    ifstream reading(values);
    double numbers = 0;
    double sum = 0;
    int counting=0;

    for ( ;reading >> numbers; )
    {
        sum = sum + numbers;
        counting++;
    }
    
    if (counting == 0)
    {
        return 0.0;
    }
    
    reading.close();
    return sum / counting;
}

/*
 1.5
  2.75  9.0

-3.25  0.0      6.5

COUT 

2.75
*/
