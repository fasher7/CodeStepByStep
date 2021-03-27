void fitnessGoal(int goal)
{
    cout << "Train until you increase for " << goal << " days." << endl;
    int i=0;
    int counting=0, max=0, minutes=0;
    while(1)
    {
        cout << "Minutes? ";
        cin >> minutes;
        if (minutes > max)
        {
            ++i;
            cout << "Great job!" << endl;
            max = minutes;
        }
        else if (minutes == max)
        {
            i = 0;
            max = minutes;
            cout << "Start over." << endl;
        }
        else if (minutes < max)
        {
            i = 0;
            max = minutes;
            cout << "Start over." << endl;
        }
        ++counting;
        if (i==goal)
        {
            break;
        }
    }
    cout << "Reached your goal in " << counting << " total days!";
}

/*
fitnessGoal(3)
Train until you increase for 3 days.
Minutes? 5
Great job!
Minutes? 10
Great job!
Minutes? 8
Start over.
Minutes? 9
Great job!
Minutes? 11
Great job!
Minutes? 2
Start over.
Minutes? 10
Great job!
Minutes? 15
Great job!
Minutes? 20
Great job!
Reached your goal in 9 total days!
*/
