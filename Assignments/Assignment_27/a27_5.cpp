/*
Enter a string :Vedant
tnadeV
vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter a string :Marvellous
suollevraM
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

void print(string sValue) {
    int i = 0;
    int iCount = 0 ;

    for(i=sValue.length()-1  ; i>= 0 ; i--){
        cout << sValue[i];
    }
    cout <<"\n" ;
}
int main()
{
    string sValue = ""; 


    cout <<"Enter a string :" ;
    getline(cin, sValue) ;
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid Input";
        return EXIT_FAILURE ;
    }

    print(sValue) ;

    return EXIT_SUCCESS ;
}