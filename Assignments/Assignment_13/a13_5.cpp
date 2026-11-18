/*
Enter a number :4567
-2
vedantbarne@Vedants-MacBook-Air-2 Assignment_13 % ./myexe
Enter a number :86245
15
*/
#include<iostream>
#include<cstdlib>

using namespace std ; 
int print (int iNo ){
    int even = 0 ;
    int odd  = 0 ;
    int diff = 0 ;
    int i = 0 ;

    while (iNo!= 0  ){
        i = iNo %10 ; 
        if(i%2 == 0) {
            even = even + i ;
        }else {
            odd = odd + i ; 
        }
        iNo = iNo /10 ; 
    }
    diff = even - odd ; 
    return diff ;
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ;

    cout <<"Enter a number :" ;
    if(!(cin >> iValue)){
        cerr <<"Invalid input "; 
        return EXIT_FAILURE ;
    }

    iRet = print (iValue ) ; 
    cout << iRet<< "\n" ; 

    return EXIT_SUCCESS ;
}