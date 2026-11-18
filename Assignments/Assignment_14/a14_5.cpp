/*
Enter a number 12
-22
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number 10
-19
*/
#include<iostream>
#include<cstdlib>
using namespace std ; 

int diff(int iNo ){
    int i = 0;
    int factorsum = 0 ;
    int nonfactorsum = 0 ;
    int idiff = 0 ;
    for(i =1 ; i<= iNo ;i++){
        if(iNo % i == 0) factorsum = factorsum + i ; 
        else nonfactorsum = nonfactorsum + i ; 

    }
    idiff = factorsum - nonfactorsum ;
    return idiff ;
}
int main(){
    int iValue = 0 ; 
    int iRet = 0 ;

    cout <<"Enter a number "  ;
    if(!(cin >> iValue )){
        cerr <<"invalid input " ;
        return EXIT_FAILURE ;
    }

    iRet = diff (iValue) ;
    cout <<iRet << "\n" ;

    return EXIT_SUCCESS ;
}