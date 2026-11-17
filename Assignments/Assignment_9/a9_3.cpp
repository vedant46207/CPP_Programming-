/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number: 5
Even Factorial of number is 8
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number: -5
Even Factorial of number is 8
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 % ./myexe
Enter number: 10
Even Factorial of number is 3840
vedantbarne@Vedants-MacBook-Air-2 Assignment_9 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int evenFactorial(int iNo)
{
    int iCnt = 0;
    int iRet = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iRet = iRet * iCnt;
    }

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

    iRet = evenFactorial(iValue);

    cout << "Even Factorial of number is " << iRet << "\n";

    return EXIT_SUCCESS;
}