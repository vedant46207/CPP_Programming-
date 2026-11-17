/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter radius: 5.3
Area = 88.2026
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter radius: 10.4
Area = 339.622
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 % ./myexe
Enter radius: abc
Invalid input
vedantbarne@Vedants-MacBook-Air-2 Assignment_10 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

double circleArea(float fRadius)
{
    double PI = 3.14;

    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    cout << "Enter radius: ";
    if(!(cin >> fValue))
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    dRet = circleArea(fValue);

    cout << "Area = " << dRet << "\n";

    return EXIT_SUCCESS;
}