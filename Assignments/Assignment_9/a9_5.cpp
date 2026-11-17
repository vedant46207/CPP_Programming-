/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number: 5
Factorial difference is -7
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number: -5
Factorial difference is -7
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number: 10
Factorial difference is 2895
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int factorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1, iOddFact = 1;
    int iRet = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iRet = iEvenFact - iOddFact;

    return iRet;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter number: ";
    if(!(cin >> iValue))
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    iRet = factorialDiff(iValue);

    cout << "Factorial difference is " << iRet << "\n";

    return EXIT_SUCCESS;
}