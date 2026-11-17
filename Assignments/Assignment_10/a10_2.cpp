/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter width and height: 5.3 9.78
Area = 51.834
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter width and height: 4 2.5
Area = 10
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

double rectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    cout << "Enter width and height: ";
    if(!(cin >> fValue1 >> fValue2))
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    dRet = rectArea(fValue1, fValue2);

    cout << "Area = " << dRet << "\n";

    return EXIT_SUCCESS;
}