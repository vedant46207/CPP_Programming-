/*
Enter a string :Vedant Barne
Enter a char :e
TRUE


vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string :Vedant Barne
Enter a char :ad
Invalid char input%           

vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string :Vedant Barne
Enter a char :z
FALSE 
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

bool print(string sValue, char cValue){
    bool bret = false ; 
    int i = 0 ;
    for(i = 0 ; i<= sValue.length()-1 ; i++){
        if(sValue[i] == cValue) {
            bret = true ; 
        }
    }
    return bret ; 
}
int main(){
    string sValue = "";
    string sChar = "" ;
    char cValue = '\0' ;
    bool bRet = false ; 

    cout <<"Enter a string :";
    getline(cin, sValue) ;
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr <<"Invalid input" ;
        return EXIT_FAILURE ;
    }
    cout << "Enter a char :" ;
    getline(cin , sChar) ;
    if(!regex_match(sChar , regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid input" ;
        return EXIT_FAILURE ; 
    }
    if(sChar.length()>1){
        cerr << "Invalid char input";
        return EXIT_FAILURE ;
    }
    cValue = sChar[0]; 

    bRet = print(sValue,cValue) ; 
    if(bRet == true ){
        cout <<"TRUE\n" ;
    }else {
        cout <<"FALSE \n" ;
    }

    return EXIT_SUCCESS ; 
}