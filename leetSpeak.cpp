void leetSpeak(string file1, string file2)
{
    ifstream normal(file1);
    ofstream edited(file2);
    string readline = "";

    for ( ;getline(normal, readline); )
    {
        int x = readline.size();
        if (x==0)
        {
            edited << endl;
        }
        for (int y = 0; y < x; ++y)
        {
            if (y==0)
            {
                edited << "(";
            }
            if (readline[y] == 111)
            {
                edited << 0;
            }
            else if (readline[y] == 'l')
            {
                edited << 1;
            }
            else if (readline[y] == 101)
            {
                edited << 3;
            }
            else if (readline[y] == 97)
            {
                edited << 4;
            }
            else if (readline[y] == 116)
            {
                edited << 7;
            }
            else if ((readline[y] == 115 && y==x-1) || (readline[y] == 115 && readline[y+1]==' '))
            {
                edited << 'Z';
            }
            else if (readline[y] == ' ')
            {
                edited << ") (";
            }
            else
                edited << readline[y];
            if (y==x-1)
            {
                edited << ")" << endl;
            }
        }
    }
    normal.close();
    edited.close();
}

/*

Original character	            'Leet' character
o	                                0
l (lowercase L)	                  1
e	                                3
a	                                4
t	                                7
s (at the end of a word only)	    Z

four score and
seven years ago our

fathers brought forth on this continent
a new nation

COUT

(f0ur) (sc0r3) (4nd)
(s3v3n) (y34rZ) (4g0) (0ur)

(f47h3rZ) (br0ugh7) (f0r7h) (0n) (7hiZ) (c0n7in3n7)
(4) (n3w) (n47i0n)
*/
