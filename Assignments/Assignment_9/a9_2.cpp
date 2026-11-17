/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number of USD: 10
Value in INR is 700
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number of USD: 3
Value in INR is 210
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number of USD: 1200
Value in INR is 84000
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int dollarToINR(int iNo)
{
    int iRet = 0;

    iRet = iNo * 70;

    return iRet;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter number of USD: ";
    if(!(cin >> iValue) || iValue < 0)
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    iRet = dollarToINR(iValue);

    cout << "Value in INR is " << iRet << "\n";

    return EXIT_SUCCESS;
}