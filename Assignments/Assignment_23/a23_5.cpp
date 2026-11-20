/*
Enter a string :Vedant Barne
1
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string :marvellous infosystem os
2
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ;
int print (string sValue ){
    int i = 0 ;
    int iCount = 0 ;
    for(i=0 ; i<= sValue.length()-1; i++){
        if(sValue[i] == ' '){
            iCount ++;
        }
    }
    return iCount ; 
}
int main(){
    string sValue = "" ;
    int iRet = 0 ; 

    cout<<"Enter a string :"; 
    getline(cin , sValue);
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr <<"Invalid input" ;
        return EXIT_FAILURE ;
    }
    iRet = print(sValue)  ;
    cout << iRet << "\n" ;

    return EXIT_SUCCESS ;
}