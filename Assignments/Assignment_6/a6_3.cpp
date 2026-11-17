/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter purchase amount: 800
Payable Amount = 800.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter purchase amount: 2000
Payable Amount = 1800.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter purchase amount: 6000
Payable Amount = 4800.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter purchase amount: -100
Invalid input
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 %
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

float calculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000.0f)
    {
        fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
    }

    fFinalAmount = fAmount - fDiscount;

    return fFinalAmount;
}

int main()
{
    float fAmount = 0.0f;
    float fRet = 0.0f;

    cout << "Enter purchase amount: ";
    if(!(cin >> fAmount) || fAmount < 0.0f)
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    fRet = calculateDiscount(fAmount);

    cout << fixed << setprecision(2) << "Payable Amount = " << fRet << "\n";

    return EXIT_SUCCESS;
}