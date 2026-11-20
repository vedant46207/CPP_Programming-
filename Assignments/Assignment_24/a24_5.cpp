/*
Enter a string :vedant
tnade%             

vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string :marvellous
suollevra% 
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

void print(string sValue ){
    int i =0 ;
    for(i = sValue.length()-1 ; i>=1; i--){
        cout << sValue[i] ;
    }
}
int main(){
    string sValue = "";

    cout <<"Enter a string :" ;
    getline(cin, sValue) ;
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid input\n";
        return EXIT_FAILURE ;
    }
    

    print(sValue ) ;

    return EXIT_SUCCESS ;
}