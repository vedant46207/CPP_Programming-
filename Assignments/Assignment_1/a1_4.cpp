/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a number :10
Divisible by 5
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a number :27
Not divisible by 5 
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a number :30
Divisible by 5
*/

#include<iostream>
#include<cstdlib>
using namespace std ; 

bool divBy5(int iNo ){
    if (iNo % 5 ==0 ) return true ; 
    else return false ; 

}
int main( ){
    int iValue = 0 ; 
    bool bRet = 0 ; 

    cout << "Enter a number :"  ; 
    if(!(cin >> iValue )){
        cerr<<"Invalid input" ; 
        return EXIT_FAILURE ; 

    }

    bRet = divBy5(iValue) ;  
    if(bRet == true ) cout << "Divisible by 5\n"; 
    else cout << "Not divisible by 5 \n" ;


    return EXIT_SUCCESS ;

}