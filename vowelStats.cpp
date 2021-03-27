void vowelStats(string calc)
{
    ifstream information(calc);

    int max=0;
    double avg = 0;
    double sum=0;
    int linecount=0;
    string readline = "";

    for ( ;getline(information, readline); )
    {
        int vowcount = 0;
        int high = readline.size();
        sum = sum + high;
        if (high > max)
        {
            max = high;
        }
        for (int x = 0; x < high; x++)
        {
            if (readline[x] == 'A' || readline[x] == 'a' || readline[x] == 'E' || readline[x] == 'e' || readline[x] == 'I' || readline[x] == 'i' || readline[x] == 'O' || readline[x] == 'o' || readline[x] == 'U' || readline[x] == 'u')
            {
                ++vowcount;
            }
        }
        ++linecount;
        cout << "Line " << linecount << " has " << high << " chars and " << vowcount << " vowels" << endl;
    }
    
    avg = sum / linecount;
    cout << linecount << " lines; longest = " << max << ", average = " << avg;
    
    information.close();
}

/*
Beware the Jabberwock, my son,
the jaws that bite, the claws that catch,

Beware the JubJub bird and shun
the frumious bandersnatch.

COUT

Line 1 has 30 chars and 8 vowels
Line 2 has 41 chars and 9 vowels
Line 3 has 0 chars and 0 vowels
Line 4 has 31 chars and 9 vowels
Line 5 has 26 chars and 8 vowels
5 lines; longest = 41, average = 25.6
*/
