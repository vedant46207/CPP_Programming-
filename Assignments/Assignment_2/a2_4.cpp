/*
Enter a number 6
EVEN%

vedantbarne@Vedants-MacBook-Air-2 Assignment_2 % ./myexe
Enter a number 9
ODD% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_2 % ./myexe
Enter a number 10
EVEN% 


*/

#include<iostream>
#include<cstdlib>
using namespace std ; 

bool checkEvenOdd(int iNo){
    if(iNo %2 == 0 ) return true ; 
    else return false  ; 
}
int main(){
    int iValue = 0 ; 
    bool bRet = false ; 

    cout << "Enter a number ";
    if(!(cin>> iValue )){
        cerr << "Invalid Input" ;
        return EXIT_FAILURE ; 
    }

    bRet = checkEvenOdd(iValue) ; 
    if(bRet == true ) cout << "EVEN" ;
    else cout << "ODD"; 
}