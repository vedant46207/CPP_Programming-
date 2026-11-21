/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : Q
q
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : m
M
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : 4
4
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : %
%
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 %
*/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std ;

char toggleCase(char cValue){
    char cRet = cValue ;

    if(cValue >= 'a' && cValue <= 'z') cRet = cValue - 32 ;
    else if(cValue >= 'A' && cValue <= 'Z') cRet = cValue + 32 ;

    return cRet ;
}

int main(){
    string sInput = "" ;
    char cValue = '\0' ;
    char cRet = '\0' ;

    cout << "Enter the character : " ;
    getline(cin, sInput) ;

    if(sInput.length() != 1){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE ;
    }
    cValue = sInput[0] ;

    cRet = toggleCase(cValue) ;

    cout << cRet << "\n" ;

    return EXIT_SUCCESS ;
}