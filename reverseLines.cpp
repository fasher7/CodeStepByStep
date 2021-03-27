void reverseLines(ifstream& readingfile)
{
    if (readingfile.fail())
    {
        return;
    }
    if (readingfile.eof())
    {
        return;
    }
    string toRead = "";
    getline (readingfile, toRead);
    reverseLines(readingfile);
    cout << toRead << endl;
    readingfile.close();
}

/*
Roses are red,
Violets are blue.
All my base
Are belong to you.

COUT

Are belong to you.
All my base
Violets are blue.
Roses are red,
*/
