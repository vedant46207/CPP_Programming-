
/*
Enter a string :Vedant04
04
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string :marvellous 61in
61
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ;
void print (string sValue ){
    int i = 0 ;
    for(i=0 ; i<= sValue.length()-1; i++){
        if(sValue[i] >= '0' && sValue[i] <= '9'){
            cout<<sValue[i];
        }
    }
    cout<<"\n" ;

 
}
int main(){
    string sValue = "" ;

    cout<<"Enter a string :"; 
    getline(cin , sValue);
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr <<"Invalid input" ;
        return EXIT_FAILURE ;
    }
    print(sValue)  ;

    return EXIT_SUCCESS ;
}