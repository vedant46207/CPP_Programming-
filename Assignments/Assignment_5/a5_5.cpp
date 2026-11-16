/*
Enter a character A
Uppercase Alphabet%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter a character m
Lowercase Alphabet%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter a character 7
Digit%

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter a character @
Special Character%
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

// Return codes : 1 = Uppercase, 2 = Lowercase, 3 = Digit, 0 = Special
int checkCharacterType(char cValue){

    int iRet = 0 ; 
    if( (cValue >= 'A') && (cValue <= 'Z') ) iRet = 1 ; 
    else if( (cValue >= 'a') && (cValue <= 'z') ) iRet = 2 ; 
    else if( (cValue >= '0') && (cValue <= '9') ) iRet = 3 ; 
    else iRet = 0 ; 
    return iRet ;
}
int main(){
    char cValue = '\0' ; 
    int iRet = 0 ; 

    cout << "Enter a character " ;
    if(!(cin >> cValue )) {
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 

    }

    iRet = checkCharacterType(cValue) ;
    if(iRet == 1 ) cout << "Uppercase Alphabet" ;
    else if(iRet == 2 ) cout << "Lowercase Alphabet" ;
    else if(iRet == 3 ) cout << "Digit" ;
    else cout << "Special Character" ;
    

    return EXIT_SUCCESS ; 

}