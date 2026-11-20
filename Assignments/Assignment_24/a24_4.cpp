/*
Enter a string :Vedant Barne
Enter a char :e
11
vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string :marvellous infosystems
Enter a char :o
14
vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string :Vedant Barne
Enter a char :z
No match
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

int print(string sValue, char cValue){
    int iIndex = 0 ;
    int i =0 ;
    for(i=0; i<= sValue.length()-1 ; i++){
        if(sValue[i] == cValue){
            iIndex = i ;
        }
    }
    return iIndex ; 

}
int main(){
    string sValue = "" ;
    string sChar = ""; 
    char cValue = '\0'; 
    int iRet = 0 ;

    cout <<"Enter a string :" ;
    getline(cin , sValue);
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE;
    }

    cout <<"Enter a char :";
    getline(cin, sChar) ;
    if(!regex_match(sChar, regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE;
    }
    if(sChar.length()>1){
        cerr << "Invalid char input\n";
        return EXIT_FAILURE ;
    }

    cValue = sChar[0];

    iRet = print(sValue , cValue) ;
    if(iRet == 0)cout <<"No match\n";
    else cout <<iRet <<"\n" ;



    return EXIT_SUCCESS ; 
}