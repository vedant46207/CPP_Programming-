/*
Enter a string :Vedant Barne
2
vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter a string :Mavellous INFOSYSTEMS
12
*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

int print(string sValue) {
    int i = 0;
    int iCount = 0 ;

    for(i=0 ; i<= sValue.length()-1 ; i++){
        if(
            sValue[i] >= 'A' 
            &&
            sValue [i] <= 'Z'
        )iCount ++; 

    }
    return iCount ; 
}
int main()
{
    string sValue = ""; 
    int iRet = 0 ; 

    cout <<"Enter a string :" ;
    getline(cin, sValue) ;
    if(!regex_match(sValue, regex("[A-Za-z0-9 ]+"))){
        cerr << "Invalid Input";
        return EXIT_FAILURE ;
    }

    iRet = print(sValue) ;
    cout << iRet << "\n" ;

    return EXIT_SUCCESS ;
}