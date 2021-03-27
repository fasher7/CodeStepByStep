void hoursWorked(string information)
{
    ifstream findings(information);
    string id = "";
    string all = "";
    double hours = 0;

    for ( ;getline(findings, all); )
    {
        double sum = 0;
        int hourcount = 0;
        stringstream ss(all);
        getline (ss, all, ' ');
        stringstream nameid(all);
        nameid >> id;
        string theirname;
        stringstream thename(all);
        getline (ss, all, ' ');
        theirname = all;
        string thehours;
        stringstream allhours(all);
        for ( ;getline(ss, all, ' '); )
        {
            hours = stod(all);
            sum = sum + hours;
            ++hourcount;
        }
        cout << theirname;
        for(int i = 0; i < 9-theirname.size(); ++i)
        {
            cout << " ";
        }
        cout <<"(ID# ";
        for(int i = 0; i < 4-id.size(); ++i)
        {
            cout << " ";
        }
        cout << id;
        cout << ") worked " << fixed << setprecision(1) << sum << " hours (" << fixed<<setprecision(2) << sum/hourcount << "/day)" << endl;
    }
    findings.close();
}

/*
123 Alex 3 2 4 1
46 Jessica 8.5 1.5 5 5 10 6
7289 Erik 3 6 4 4.68 4

CHANGED INTO

Alex     (ID#  123) worked 10.0 hours (2.50/day)
Jessica  (ID#   46) worked 36.0 hours (6.00/day)
Erik     (ID# 7289) worked 21.7 hours (4.34/day)
*/
