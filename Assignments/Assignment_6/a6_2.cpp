/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter marks and age: 75 18
Eligible for Admission
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter marks and age: 55 19
Not Eligible
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter marks and age: 80 16
Not Eligible
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter marks and age: 120 18
Invalid input
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

bool checkAdmission(float fMarks, int iAge)
{
    bool bRet = false;

    if(fMarks >= 60.0f && iAge >= 17)
    {
        bRet = true;
    }

    return bRet;
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
    bool bRet = false;

    cout << "Enter marks and age: ";
    if(!(cin >> fMarks >> iAge) || fMarks < 0.0f || fMarks > 100.0f || iAge < 0)
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    bRet = checkAdmission(fMarks, iAge);

    if(bRet == true) cout << "Eligible for Admission\n"; else cout << "Not Eligible\n";

    return EXIT_SUCCESS;
}