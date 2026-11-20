/*
Enter a string :Vedant BArne
Vedant barne
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string :Marvellous Infosystems OS
Marvellous infosystems os
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ;
string print (string sValue ){
    int i = 0 ;
    for(i=0 ; i<= sValue.length()-1; i++){
        if(sValue[i] >= 'A' && sValue[i] <= 'Z'){
            sValue[i] += 32 ; 
        }

    }
    return sValue ; 
}
int main(){
    string sValue = "" ;
    string iRet = ""; 

    cout<<"Enter a string :"; 
    getline(cin , sValue);
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr <<"Invalid input" ;
        return EXIT_FAILURE ;
    }

    iRet = print(sValue) ;
    cout <<iRet <<"\n" ; 

    return EXIT_SUCCESS ;
}