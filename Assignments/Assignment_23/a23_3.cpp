/*
Enter a string :Vedant Barne
vEDANT bARNE
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string :Marvellous Infosystems
mARVELLOUS iNFOSYSTEMS
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ;
string print(string sValue) {
    int i = 0 ;
    for( i=0 ; i<= sValue.length()-1;i++){
        if(sValue[i]>= 'A' && sValue[i]<='Z'){
            sValue[i] +=32; 
        }
        else if(sValue[i]>= 'a' && sValue[i]<='z'){
            sValue[i] -=32; 
        }
    }
    return sValue ;
}

int main(){
    string sValue = "" ; 
    string sRet = ""; 

    cout <<"Enter a string :";
    getline(cin ,sValue);
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cout << "Invalid input "; 
        return EXIT_FAILURE ;
    }
    sRet = print(sValue) ;
    cout<<sRet <<"\n" ;
    return EXIT_SUCCESS ;
}