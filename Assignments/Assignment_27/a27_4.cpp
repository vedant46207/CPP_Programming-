/*
Enter a string :Vedant
TRUE
vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter a string :vdnt
FALSE
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

int print(string sValue) {
    int i = 0;
    int iCount = 0 ;

    for(i=0 ; i<= sValue.length()-1 ; i++){
        if(
            sValue[i] == 'A' || sValue[i] == 'a' 
            ||
            sValue[i] == 'E' || sValue[i] == 'e' 
            ||
            sValue[i] == 'I' || sValue[i] == 'i' 
            ||
            sValue[i] == 'O' || sValue[i] == 'o' 
            ||
            sValue[i] == 'U' || sValue[i] == 'u' 
        )iCount ++; 

    }
    return iCount ; 
}
int main()
{
    string sValue = ""; 
    int iRet = 0 ; 

    cout <<"Enter a string :" ;
    getline(cin, sValue) ;
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid Input";
        return EXIT_FAILURE ;
    }

    iRet = print(sValue) ;
    if(iRet > 0)cout <<"TRUE\n" ;
    else cout << "FALSE\n" ;


    return EXIT_SUCCESS ;
}