/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter first number :
5
Enter second number :6
6 is greater than 5%

vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter first number :
8
Enter second number :6
8 is greater than 6%  



*/
#include<iostream>
#include<cstdlib>
using namespace std ; 

bool great(int iNo1, int iNo2){
    return (iNo1>iNo2) ;
}

int main(){
    int iValue1 = 0 ; 
    int iValue2 = 0 ;
    bool bRet = false ; 

    cout << "Enter first number :\n";
    if(!(cin >> iValue1 )){
        cout << "Invalid input " ; 
        return EXIT_FAILURE ;

    }
    cout << "Enter second number :"; 
    if(!(cin >> iValue2 )){
        cout << "Invalid input " ; 
        return EXIT_FAILURE ;

    }
    bRet = great (iValue1, iValue2) ;
    if(bRet == true ) {
        cout << iValue1 << " is greater than "<< iValue2;
        
    }else {
        cout << iValue2 << " is greater than "<< iValue1;
   
    }

    return EXIT_SUCCESS ;

}