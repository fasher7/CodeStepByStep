void wordStatsPlus (string thefile)
{
    ifstream wordstats(thefile);
    
    if (!wordstats.is_open())
    {
        cerr << "Error, bad input file.";
        return;
    }

    double countline = 0;
    double twords = 0;
    double countunique = 0;
    double percentage = 0;
    double avgWLine = 0;
    double avgWlength = 0;
    int lengthW = 0;
    string toread = " ";
    string letter = " ";

    for( ;getline(wordstats, toread); )
    {
        int a = toread.size();

        stringstream ss(toread); 
        string word;  
        while (ss >> word)  
        { 
            twords++;
        } 
    
        for (int x = 0; x < a; ++x)
        {
            if (toread[x] != ' ')
            {
                ++lengthW;
            }
        }

        for (int y = 0; y < a; ++y)
        {
          char alpha = tolower(toread[y]);
          int size = letter.size();
          bool unique = true;
            for (int b = 0; b < size; ++b)
            {
                if (alpha >= 'a' && alpha <= 'z')
                {
                  
                    if (alpha == letter[b])
                    {   
                        unique=false;
                    }
                }
                else
                {
                  unique = false;
                }
            }
            if(unique)
            {
              letter = letter + alpha;
              countunique++;
            }
        }

        ++countline;
    }

    avgWLine = (twords/countline);
    avgWlength = (lengthW/twords);
    percentage = (countunique/26)*100;
    int percentage2 = percentage;

    
    cout << "Total lines = " << countline << endl;
    cout << "Total words = " << twords << endl;
    cout << "Total unique letters = " << countunique << " (" << percentage2 << "% of alphabet)" << endl;
    cout << "Average words/line = " << avgWLine << endl;
    cout << "Average word length = " << avgWlength;

    wordstats.close(); 
}

/*
To be  or not  TO BE,  
 THAT  IS  

COUT

Total lines = 4
Total words = 11
Total unique letters = 14 (53% of alphabet)
Average words/line = 2.75
Average word length = 3.45455
*/
