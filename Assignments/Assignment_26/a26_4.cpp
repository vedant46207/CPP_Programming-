/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : %
TRUE
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : d
FALSE
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 %
*/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std ;

bool checkSpecial(char cValue){
    bool bRet = false ;

    if(cValue == '!' || cValue == '@' || cValue == '#' || cValue == '$' ||
       cValue == '%' || cValue == '^' || cValue == '&' || cValue == '*'){
        bRet = true ;
    }

    return bRet ;
}

int main(){
    string sInput = "" ;
    char cValue = '\0' ;
    bool bRet = false ;

    cout << "Enter the character : " ;
    getline(cin, sInput) ;

    if(sInput.length() != 1){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE ;
    }
    cValue = sInput[0] ;

    bRet = checkSpecial(cValue) ;

    if(bRet == true) cout << "TRUE\n" ;
    else cout << "FALSE\n" ;

    return EXIT_SUCCESS ;
}