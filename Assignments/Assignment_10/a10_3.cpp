/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter temperature in Fahrenheit: 10
Temperature in Celsius = -12.2222
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter temperature in Fahrenheit: 34
Temperature in Celsius = 1.11111
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

double fhToCs(float fTemp)
{
    return (fTemp - 32) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    cout << "Enter temperature in Fahrenheit: ";
    if(!(cin >> fValue))
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    dRet = fhToCs(fValue);

    cout << "Temperature in Celsius = " << dRet << "\n";

    return EXIT_SUCCESS;
}
