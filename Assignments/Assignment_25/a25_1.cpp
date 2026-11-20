/*
Enter a char :A
TRUE% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char :a
TRUE%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char :&
FALSE

*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

int main(){
    string sChar = "";
    char sValue = '\0'; 
    cout << "Enter a char :" ;
    getline(cin , sChar);
    if(!regex_match(sChar, regex("[A-Za-z]+"))){
        cerr << "FALSE\n" ;
        return EXIT_FAILURE ;
    }
    if(sChar.length()>1){
        cout << "FALSE\n";
        return EXIT_FAILURE;

    }
    cout << "TRUE"; 

    return EXIT_SUCCESS ;
}