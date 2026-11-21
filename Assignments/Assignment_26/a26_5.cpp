/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter the character : A
Decimal		65
Octal		0101
Hexadecimal	0X41
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 %
*/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std ;

void displayASCII(char cValue){
    int iValue = (int)cValue ;

    cout << "Decimal\t\t" << dec << iValue << "\n" ;
    cout << "Octal\t\t" << oct << showbase << iValue << "\n" ;
    cout << "Hexadecimal\t" << hex << uppercase << showbase << iValue << "\n" ;

    cout << dec << nouppercase << noshowbase ;
}

int main(){
    string sInput = "" ;
    char cValue = '\0' ;

    cout << "Enter the character : " ;
    getline(cin, sInput) ;

    if(sInput.length() != 1){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE ;
    }
    cValue = sInput[0] ;

    displayASCII(cValue) ;

    return EXIT_SUCCESS ;
}