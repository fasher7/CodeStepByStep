int printMostCommonName (string allnames)
{
    ifstream thename(allnames);
    int counting = 0;
    int uniquecount = 0;
    int max = 0;
    string name = "";
    string namearr[100];
    thename >> namearr[counting];

    if(thename.fail())
    {
        return 0;
    }

    while (!thename.eof())
    {
        counting++;
        thename >> namearr[counting];
    }

    int cs = 0;
    for (int i = 0; i < sizeof(namearr)/sizeof(*namearr); ++i)
    {
        if (namearr[i] != "")
        {
            ++cs;
        }
    }
    
    for (int i = 0; i < cs ; i++) 
    {
        int count = 1;
        for (int j = i+1; j < cs ; j++) 
        {
            if (namearr[i] == namearr[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            name = namearr[i];
        }
    }

    for (int i = 0; i < cs ; i++) 
    {
        ++uniquecount;
        for (int j = 0; j < i ; j++) 
        {
            if (namearr[i] == namearr[j])
            {
                --uniquecount;
                break;
            }
        }
    }
    
    if (name == " ")
    {
        cout << "Most common name: " << namearr[0] << ", " << 1;
    }

    cout << "Most common name: " << name << ", " << max;
    
    thename.close();
    return uniquecount;
}

/*
Benson
Eric   Eric  Marty
Kim  Kim Kim   Jenny  Nancy 
Nancy  Nancy  Paul  Paul

COUT

Most common name: Kim, 3
*/
