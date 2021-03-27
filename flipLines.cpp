void flipLines(string thefile)
{
    ifstream changing(thefile);
    
    if (changing.fail())
    {
        cerr << "Unable to open input file \"" << thefile << "\"!";
        return;
    }

    string sentence[2];
    string theline = " ";
    int x = 0;

    for ( ;getline(changing, theline); )
    {
        sentence[x] = theline;
        if (x > 0)
        {
            x = -1;

            string changingline1;
            string changingline2;

            changingline1 = sentence[0];
            changingline2 = sentence[1];

            transform(changingline1.begin(), changingline1.end(), changingline1.begin(), ::tolower);
            transform(changingline2.begin(), changingline2.end(), changingline2.begin(), ::toupper);

            cout << changingline2;
            cout << endl;
            cout << changingline1;
            cout << endl;
        }
        ++x;
    }

    if (x > 0)
    {
        theline = sentence[0];
        transform(theline.begin(), theline.end(), theline.begin(), ::toupper);

        cout << theline;
        cout << endl;
    }  

    changing.close();
}

 
/*TWAS brillig and the Slithy Toves                            
did GYRE and gimble in the Wabe.
All mimsey were the Borogroves,
and the mome RATHS outgrabe.

"Beware the Jabberwock, my Son,
the JAWS that bite, the claws that Catch,
Beware the JubJub bird and SHUN
The Frumious Bandersnatch."

CHANGED INTO

DID GYRE AND GIMBLE IN THE WABE.
twas brillig and the slithy toves
AND THE MOME RATHS OUTGRABE.
all mimsey were the borogroves,
"BEWARE THE JABBERWOCK, MY SON,

BEWARE THE JUBJUB BIRD AND SHUN
the jaws that bite, the claws that catch,
THE FRUMIOUS BANDERSNATCH."*/
