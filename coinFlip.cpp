void coinFlip (int k, char side)
{
    if (k<0)
    {
        cout << "ERROR!" << endl;
    }
    else if (side!='T' && side!='H') 
    {
        cout << "ERROR!" << endl;
    }
    else if (k==0)
    {
        cout << "You got " << side << " " << k << " times in a row!" << endl;
    }      
    else if ((k>0 && side=='H') || (k>0 && side=='T'))
    {
        srand(time(0));
        int counting=0;
        char sidecheck;
        char HorT[2] = { 'H', 'T' };
        for(;;)
        {
            sidecheck =  HorT[rand()%2];
            cout << sidecheck << " ";
            if (side == sidecheck)
            {
                counting++;
                if (counting == k)
                {
                    break;
                }
            }
            if (sidecheck!=side)
            {
                counting=0;
            }
        }
        cout << endl;
        cout << "You got " << side << " " << k << " times in a row!" << endl;
    }
    return;
}

/*
T H T H T T H T T H H T H H H H H T T T T
You got T 4 times in a row!
*/
