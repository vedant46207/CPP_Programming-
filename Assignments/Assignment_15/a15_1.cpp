/*
Enter a string :Vedant Barne
Vedant Barne
vedantbarne@Vedants-MacBook-Air-2 Assignment_15 % ./myexe
Enter a string :Marvellous
Marvellous
vedantbarne@Vedants-MacBook-Air-2 Assignment_15 % ./myexe
Enter a string :marvellous multisystem os 
marvellous multisystem os
*/

#include<iostream>
#include<cstdlib>
#include<string>
#include<regex>

using namespace std ; 

int main(){
    string sValue = "" ;
    cout << "Enter a string :"; 
    getline(cin, sValue) ;
    if(!regex_match(sValue , regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid input \n";
        return EXIT_FAILURE ;
    }

    cout << sValue <<"\n";

    return EXIT_SUCCESS ;

}