#include <iostream>
using namespace std;

void diffBMI(float BMIx, float BMIy)
{
    if (BMIy > BMIx)
    {
        float temp = BMIy;
        BMIy = BMIx;
        BMIx = temp;
    }
    cout << "BMI difference = " << BMIx - BMIy;
}

void classcatg(float BMI)
{
    int classg = 0;
    if (BMI < 18.5)
    {
        classg = 1;
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        classg = 2;
    }
    else if (BMI >= 25.0 && BMI < 30)
    {
        classg = 3;
    }
    else
    {
        classg = 4;
    }
    cout << "BMI = " << BMI << ", class " << classg << endl;
}

float BMIperson(float height, float weight)
{
    float BMI = ((weight / (height * height)) * 703);
    return BMI;
}

int main()
{
    float height1, weight1, height2, weight2;
    cout << "This program reads data for two people\nand computes their body mass index (BMI).\n" << endl;
    cout << "Enter Person 1's information:" << endl;
    cout << "height (in inches)? ";
    cin >> height1;
    cout << "weight (in pounds)? ";
    cin >> weight1;
    float BMIx = BMIperson(height1, weight1);
    classcatg(BMIx);
    cout << endl;         
    cout << "Enter Person 2's information:" << endl;
    cout << "height (in inches)? ";
    cin >> height2;
    cout << "weight (in pounds)? ";
    cin >> weight2;
    float BMIy = BMIperson(height2, weight2);
    classcatg(BMIy);
    cout << endl;
    diffBMI(BMIx, BMIy);
    cout << endl;
    return 0;
}

/*
   BMI	       Category
below 18.5	   class 1
18.5 - 24.9	   class 2
25.0 - 29.9	   class 3
30.0 and up	   class 4

Enter Person 1's information:
height (in inches)? 70.0
weight (in pounds)? 194.25
BMI = 27.8689, class 3

Enter Person 2's information:
height (in inches)? 62.5
weight (in pounds)? 130.5
BMI = 23.4858, class 2

BMI difference = 4.3831
*/
