/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter consumed units: 80
Bill = 400.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter consumed units: 150
Bill = 850.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter consumed units: 250
Bill = 1700.00
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter consumed units: -5
Invalid input
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 %
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

float calculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }

    return fBill;
}

int main()
{
    int iUnits = 0;
    float fRet = 0.0f;

    cout << "Enter consumed units: ";
    if(!(cin >> iUnits) || iUnits < 0)
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    fRet = calculateElectricityBill(iUnits);

    cout << fixed << setprecision(2) << "Bill = " << fRet << "\n";

    return EXIT_SUCCESS;
}