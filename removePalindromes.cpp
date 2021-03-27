void removePalindromes(string a[], int x)
{
    for (int k=0; k<x; ++k)
    {
        bool check = true;
        string findword = a[k];
        int countword = findword.size();
        for (int j=0; j<countword; ++j)
        {
            check=false;
            if (findword[j]==findword[countword-1-j]) 
            {
                check = true;
            }
            else if (findword[j]==findword[countword-1-j]+32)
            {
                check = true;
            }
            else if (findword[j]==findword[countword-1-j]-32)
            {
                check = true;
            }
          if(check==false){break;}
        }
        if (check == true)
        {
               a[k] = "";
        }
    }
}

/*
For example, if an array named a stores the following element values:

string a[] = {"Madam", "raceCAR", "", "hi", "A", "Abba", "banana", "dog God",
              "STOP otto POTS", "Madame", "C++", "LevEL", "staTS"};
              
Then the call of removePalindromes(a, 13); should change it to contain the following element values.
Notice that the palindromes from the array such as "Madam" and "LevEL" have been replaced by "".

             {"", "", "", "hi", "", "banana", "", "", "Madame", "C++", "", ""}
*/
