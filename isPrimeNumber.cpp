bool isPrimeNumber (int inte)
{
    bool x = true;
    if (inte==2){
            x = true;
        }
    else if (inte > 2)
    {
        for (int i=2; i<inte; i++)
        {
          if (inte%i==0)
            {
                x = false;
                break;
            }
        }
    }
    else if (inte<2)
    {
        x = false;
    }
    return x; 
}

