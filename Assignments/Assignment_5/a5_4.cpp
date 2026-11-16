/*
Enter number 15
Divisible by Both%
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter number 9
Divisible by 3 Only%
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter number 10
Divisible by 5 Only%
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter number 7
Not Divisible by Either%
*/
 
#include<iostream>
#include<cstdlib>
 
using namespace std ; 
 
int checkMultipleDivisibility(int iValue){
 
    int iRet = 0 ; 
    if( (iValue % 3 == 0) && (iValue % 5 == 0) ) iRet = 1 ; 
    else if( iValue % 3 == 0 ) iRet = 2 ; 
    else if( iValue % 5 == 0 ) iRet = 3 ; 
    else iRet = 0 ; 
    return iRet ;
}
int main(){
    int iValue = 0 ; 
    int iRet = 0 ; 
 
    cout << "Enter number " ;
    if(!(cin >> iValue )) {
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 
 
    }
 
    iRet = checkMultipleDivisibility(iValue) ;
    if(iRet == 1 ) cout << "Divisible by Both" ;
    else if(iRet == 2 ) cout << "Divisible by 3 Only" ;
    else if(iRet == 3 ) cout << "Divisible by 5 Only" ;
    else cout << "Not Divisible by Either" ;
    
 
    return EXIT_SUCCESS ; 
 
}
 

