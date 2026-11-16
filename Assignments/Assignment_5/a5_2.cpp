/*
Enter year 2024
Leap Year%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter year 1900
Not a Leap Year%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter year 2000
Leap Year%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter year 0
Invalid Year %
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

bool checkLeapYear(int iYear){

    bool bRet = false ; 
    if( (iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)) ) bRet = true ; 
    else bRet = false ; 
    return bRet ;
}
int main(){
    int iYear = 0 ; 
    bool bRet = false ; 

    cout << "Enter year " ;
    if(!(cin >> iYear )) {
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 

    }

    if( iYear <= 0 ) {
        cerr<< "Invalid Year " ;
        return EXIT_FAILURE ; 

    }

    bRet = checkLeapYear(iYear) ;
    if(bRet == true ) cout << "Leap Year" ;
    else cout << "Not a Leap Year" ;
    

    return EXIT_SUCCESS ; 

}