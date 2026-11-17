/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter area in square feet: 5
Area in square meter = 0.4645
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter area in square feet: 7
Area in square meter = 0.6503
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

double squareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    cout << "Enter area in square feet: ";
    if(!(cin >> iValue))
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    dRet = squareMeter(iValue);

    cout << "Area in square meter = " << dRet << "\n";

    return EXIT_SUCCESS;
}
