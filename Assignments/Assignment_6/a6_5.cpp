/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter salary and years of service: 30000 12
Bonus = 4500.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter salary and years of service: 20000 7
Bonus = 2000.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter salary and years of service: 10000 2
Bonus = 500.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter salary and years of service: -500 3
Invalid input
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 %
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

float calculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    return fBonus;
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
    float fRet = 0.0f;

    cout << "Enter salary and years of service: ";
    if(!(cin >> fSalary >> iYears) || fSalary <= 0.0f || iYears < 0)
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    fRet = calculateBonus(fSalary, iYears);

    cout << fixed << setprecision(2) << "Bonus = " << fRet << "\n";

    return EXIT_SUCCESS;
}