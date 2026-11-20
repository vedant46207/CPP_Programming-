/*
Enter a string :Vedant Barne
VEDANT BARNE
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string :marvellous
MARVELLOUS
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 
string print(string sValue){
    int i =0 ;
    for(i =0 ; i<= sValue.length() -1 ; i++){
        if(sValue[i] >= 'a' && sValue[i] <= 'z'){
            sValue[i] -= 32 ; 
        }

    }
    return sValue ; 
}
int main(){
    string sValue = "" ; 
    string sRet = "" ; 

    cout<<"Enter a string :";
    getline(cin , sValue ); 
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr <<"invalid input"; 
        return EXIT_FAILURE ;
    }
    sRet = print(sValue); 
    cout <<sRet <<"\n" ;
    return EXIT_SUCCESS ;

}