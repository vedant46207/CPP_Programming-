/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter three sides: 3 4 5
Valid Triangle
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter three sides: 1 2 3
Invalid Triangle
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 % ./myexe
Enter three sides: 0 4 5
Invalid Triangle
vedantbarne@Vedants-MacBook-Air-2 Assignment_6 %
*/

#include<iostream>
#include<cstdlib>
using namespace std;

bool checkTriangle(int iSide1, int iSide2, int iSide3)
{
    bool bRet = false;

    if((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0) &&
       (iSide1 + iSide2 > iSide3) &&
       (iSide2 + iSide3 > iSide1) &&
       (iSide1 + iSide3 > iSide2))
    {
        bRet = true;
    }

    return bRet;
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    bool bRet = false;

    cout << "Enter three sides: ";
    if(!(cin >> iSide1 >> iSide2 >> iSide3))
    {
        cerr << "Invalid input\n";
        return EXIT_FAILURE;
    }

    bRet = checkTriangle(iSide1, iSide2, iSide3);

    if(bRet == true) cout << "Valid Triangle\n"; else cout << "Invalid Triangle\n";

    return EXIT_SUCCESS;
}